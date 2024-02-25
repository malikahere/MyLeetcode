class Solution {
public:

int findparent(int u,vector<int>&par)
    {
        if(u==par[u])
            return u;
        return par[u]=findparent(par[u],par);
    }
    void Union(int u,int v,vector<int>&par)
    {
        int pu=findparent(u,par);
        int pv=findparent(v,par);
         if(pu!=pv)
         {
             par[pu]=pv;
         }
    }

    bool canTraverseAllPairs(vector<int>& nums) {
        int n=nums.size();
        vector<int>par(100001+n);
        for(int i=1;i<100001+n;i++)
        {
            par[i]=i;
        }
        int cnt=1;
        if(n==1)
        {
            return true;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                return false;
            Union(100001+i,nums[i],par);
            for(int j=2;j*j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    Union(100001+i,j,par);
                    if(nums[i]/j!=j)
                    {
                         Union(100001+i,nums[i]/j,par);
                    }
                }
            }
        }
        int p=findparent(100001,par);
        for(int i=1;i<nums.size();i++)
        {
            int pi=findparent(100001+i,par);
            if(p!=pi)
            {
                return false;
            }
        }
        return true;
    }
};