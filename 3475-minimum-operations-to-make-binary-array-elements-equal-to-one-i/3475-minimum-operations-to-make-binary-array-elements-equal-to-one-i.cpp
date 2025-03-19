class Solution {
    void flip(vector<int>&nums,int pos)
    {
        nums[pos]^=1;
        nums[pos+1]^=1;
        nums[pos+2]^=1;
    }
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int opr=0;
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]==1) continue;
            else
            {
                flip(nums,i);
                opr++;
            }
        }
        if(nums[n-1]==0||nums[n-2]==0) return -1;
        return opr;
        
    }
};