class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> vec(37);  
        int maxi = 0;

        for (int i = 1; i <= n; i++) {
            int sum = digsum(i);
            vec[sum]++;
            maxi = max(maxi, vec[sum]);
        }

        int res = 0;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == maxi) {
                res++;
            }
        }

        return res;
    }

private:
    int digsum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};
