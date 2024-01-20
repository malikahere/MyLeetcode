class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
        long long int ans=0;
        for(int i=0;i<arr.size();i++){
            int rt=0,lt=0;
            long long int curr=0;
            int j=i;
            while(j<arr.size() && arr[j]>=arr[i]){
                rt++;
                j++;
            }
            curr=curr+(arr[i]*rt);
            ans+=curr;
            j=i-1;
            while(j>=0 && arr[j]>arr[i]){
                lt++;
                j--;
            }
            ans+=(lt*curr);
            ans=ans%1000000007;
        }
        return (int)ans;
    }
};