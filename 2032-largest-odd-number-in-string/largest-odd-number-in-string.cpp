class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        for (int i=num.size()-1 ; i>=0 ; i--){
            int a = (int)num[i];
            if(a%2 ==1){
                for(int j=0 ; j<=i ; j++){
                    ans +=num[j];
                }
                break;
            }
        } 
        return ans;
    }
};