class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int>vec;
        int left=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                swap(nums[left],nums[i]);
                left++;
            }
        }
        return nums;
    }
};