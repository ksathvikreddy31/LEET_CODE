class Solution {
public:
    // Find first occurrence of target
    int findFirst(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int firstPos = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                firstPos = mid;
                right = mid - 1;  // Continue searching left part
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {  // nums[mid] > target
                right = mid - 1;
            }
        }
        return firstPos;
    }

    // Find last occurrence of target
    int findLast(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int lastPos = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                lastPos = mid;
                left = mid + 1;  // Continue searching right part
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {  // nums[mid] > target
                right = mid - 1;
            }
        }
        return lastPos;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};
