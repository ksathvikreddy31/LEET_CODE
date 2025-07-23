class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>res;
        for(int val:nums){
            mp[val]++;
        }
        for(auto v:mp){
            if(v.second>n/3){
                res.push_back(v.first);
            }
        }
        return res;
        
    }
};