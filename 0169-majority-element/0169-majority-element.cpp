class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int mx=INT_MIN;
        int maj=nums[0];
        for(auto& c:mp){
            if(c.second>mx){
                mx=c.second;
                maj=c.first;
            }
        }
        return maj;
    }
};