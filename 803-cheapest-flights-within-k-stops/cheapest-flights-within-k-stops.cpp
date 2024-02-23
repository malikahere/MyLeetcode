class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
         // minimun chaiye to store karte h 
      vector<int>dist(n,INT_MAX);
// graph ka question h to phele graph to banana hi hoga 
 // pair isliye kyu ki apne ko cost v to sath m lena h to hi hum further conmpair kar payenge
      unordered_map<int,vector<pair<int,int>>>adj;
      for(vector<int>vec:flights){
          int u=vec[0];
          int v=vec[1];
          int cost=vec[2];
          adj[u].push_back({v,cost});
      }   
// bfs h to queue lete h
      queue<pair<int,int>>q;
// phele src se bfs lagate h 
// src se src ka distance obious 0 h to phele queue m push kardete h
      int steps=0;
      q.push({src,0});
      dist[src]=0;
      while(!q.empty() && steps<=k){ //yanha bas q.empty ka condition se nhi hoga kyu ki max pana k node bich m la skate h to steps ka calculation v dekhana hoga
          int N=q.size();
          while(N--){
          int u=q.front().first;
          int d=q.front().second;
          q.pop();
          for(pair<int,int>p:adj[u]){
              int v=p.first;
              int cost=p.second;
              if(dist[v]>d+cost){ // dekhe lo kya new wala distance chhota h ? to bhai chhota milraha h to store karo na to hi na apne ko ans milga
                  dist[v]=d+cost;
                  q.push({v,d+cost});
              }
          }
          }
          steps++;
      }
// ab kya bas dekhe lo destination wala ka distance ab tak INT_MAX nhi h na agar h to wanha hum k ke sath ja nhi skate to bhai -1 retrun karo
      if(dist[dst]==INT_MAX){
          return -1;
      }
      return dist[dst];
    }
};