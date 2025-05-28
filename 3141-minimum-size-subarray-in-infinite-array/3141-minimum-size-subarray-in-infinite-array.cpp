class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        long long ts=0;
        int n=nums.size();
        for(int num:nums) ts+=num;
        vector<int>nums1=nums;
        nums1.insert(nums1.end(),nums.begin(),nums.end());
        int q=target/ts;
        int rem=target%ts;
        if(rem==0) return q*n;
        long long sum=0;
        int minil=INT_MAX;
        int st=0,ed=0;
        while(ed<nums1.size())
        {
            sum+=nums1[ed];
            while(sum>rem)
            {
                sum-=nums1[st];
                st++;
            }
            if(sum==rem) minil=min(minil,ed-st+1);
            ed++;
        }
        return (minil==INT_MAX)?-1:q*n+minil;
        
    }
};