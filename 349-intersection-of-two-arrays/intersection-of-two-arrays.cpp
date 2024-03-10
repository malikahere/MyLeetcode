class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a , b;
        for(auto i:nums1){
            a.insert(i);
        }
        for(auto i:nums2){
            b.insert(i);
        }
        vector<int> ans;
        for(auto it:a)
        {
            if(b.find(it)!=b.end())
            ans.push_back(it);
        }

        return ans;
    }
};