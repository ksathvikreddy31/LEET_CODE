class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>num;
        for(int n:nums)
        {
            num.insert(n);
        }
        vector<int>uqel(num.begin(),num.end());
        if(uqel.size()<3)
        {
            return uqel.back();
        }
        else
        {
            return uqel[uqel.size()-3];
        }
    }
};