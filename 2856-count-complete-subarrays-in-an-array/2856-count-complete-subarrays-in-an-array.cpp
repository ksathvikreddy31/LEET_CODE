class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>ue(nums.begin(),nums.end());
        int uc=ue.size();
        int left=0;
        int right=0;
        int n=nums.size();
        unordered_map<int,int>freq;
        int cs=0;
        while(left<n){
            while(right<n&&freq.size()<uc)
            {
                freq[nums[right]]++;
                right++;
            }
            if(freq.size()<uc) break;
            cs+=n-right+1;
            freq[nums[left]]--;
            if(freq[nums[left]]==0) freq.erase(nums[left]);
            left++;
        }
        return cs;
    }
};