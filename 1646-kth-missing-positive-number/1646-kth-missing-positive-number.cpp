class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int c = 1;      
        int count = 0;  
        int i = 0;      
        while (true) {
            if (i < arr.size() && arr[i] == c) {
                i++; 
            } else {
                count++; 
                if (count == k) {
                    return c;
                }
            }
            c++; 
        }
    }
};
