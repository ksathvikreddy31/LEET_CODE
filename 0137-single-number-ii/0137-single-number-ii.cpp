class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;
        for (int val : nums) {
            mp[val]++;
        }
        for (auto v : mp) {
            if (v.second == 1) {
                return v.first;
            }
        }
        return -1;
    }
};
