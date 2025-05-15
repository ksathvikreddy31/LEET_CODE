class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=(n+1)/2,m=0;;
        sort(nums.begin(),nums.end());
        while(r<nums.size())
        {
            if(2*nums[l]<=nums[r])
            {
                m+=2;
                l++;
            }
            r++;
        }
        return m;
    }
};