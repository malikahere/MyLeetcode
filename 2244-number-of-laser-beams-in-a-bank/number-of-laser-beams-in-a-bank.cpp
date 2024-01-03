class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sol =0 , a=0;
        for(int i = 0; i<bank.size(); i++){
            int n = count(bank[i].begin() , bank[i].end() , '1');
             if(n==0){
                 continue;
             }
             sol = sol+ n*a ;
             a=n;
        }
        return sol;
    }
};