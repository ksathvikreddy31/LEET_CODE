class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left=0;
        int right=0;
        int n=nums.size();
        int curr_sum=0;
        int xor_sum=0;
        int maxlen=0;
        while(right<n){
            curr_sum+=nums[right];
            xor_sum^=nums[right];
            while(curr_sum!=xor_sum)
            {
                curr_sum-=nums[left];
                xor_sum^=nums[left];
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
        
    }
};