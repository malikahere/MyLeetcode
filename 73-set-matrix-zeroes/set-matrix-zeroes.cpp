class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int r = matrix.size();
      int c = matrix[0].size();
      vector<int> a , b ;
      for(int i =0 ; i<r ; i++){
          for(int j=0;j<c;j++){
               if(matrix[i][j]==0){
             a.push_back(i);
             b.push_back(j);}
          }
        }
      for(int i =0 ; i<a.size() ; i++){
          for(int j=0;j<c;j++){
            matrix[a[i]][j]=0;
            
          }
        }
         for(int j=0;j<b.size();j++){
          for(int i =0 ; i<r ; i++){
            matrix[i][b[j]]=0; 
          }
        }
    }
};