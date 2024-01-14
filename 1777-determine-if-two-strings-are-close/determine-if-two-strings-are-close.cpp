class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size()!= word2.size()) return false;

        set<char>s1 , s2 ;
        for(int i = 0 ; i<word1.size() ; i++){
            s1.insert(word1[i]);
            s2.insert(word2[i]);
        }
        map<char,int>mp1;
        map<char,int>mp2;

        for(auto i:word1) mp1[i]++;
        for(auto i:word2) mp2[i]++;

         vector<int>v1;
        vector<int>v2;
        for(auto it:mp1){
            v1.push_back(it.second);
        }

        for(auto it:mp2){
            v2.push_back(it.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        if (s1==s2 and v1==v2) return true;
        else return false;
    }
};