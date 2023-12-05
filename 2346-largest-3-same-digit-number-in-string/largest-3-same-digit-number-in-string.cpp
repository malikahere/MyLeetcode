class Solution {
public:
    string largestGoodInteger(string num) {
        int mx=-1;
        for(int i=0;i<num.length()-2;i++){
            if(num[i]==num[i+1] && num[i] == num[i+2]){
                mx=max(mx,num[i]-'0');
            }
        }
        if(mx==-1) return "";
        else return to_string(mx)+to_string(mx)+to_string(mx);
    }
};