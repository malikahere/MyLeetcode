class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=matrix[0][0];
        for(int i=1 ; i<matrix.size() ; i++)
        {
            for(int j=0 ; j<matrix.size() ; j++)
            {
                if(j==0)
                {
                    matrix[i][0]+=min(matrix[i-1][0] , matrix[i-1][0+1]);
                    ans=matrix[i][0];
                }
                else if(j==matrix.size()-1)
                {
                    matrix[i][j]+=min(matrix[i-1][j] , matrix[i-1][j-1]);
                }
                else
                {
                    int add=min(matrix[i-1][j] , matrix[i-1][j+1]);
                    matrix[i][j]+=min(add , matrix[i-1][j-1]);
                }
                if(i==matrix.size()-1)
                {
                    ans=min(ans , matrix[i][j]);
                }
            }
        }
        return ans;
    }
};