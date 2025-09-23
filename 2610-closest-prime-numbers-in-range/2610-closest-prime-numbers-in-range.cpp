class Solution {
public:
    bool isprime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> vec;
        for (int i = left; i <= right; i++) {
            if (isprime(i)) vec.push_back(i);
        }

        if (vec.size() < 2) return {-1, -1};

        int minDiff = INT_MAX, p = -1, q = -1;
        for (int i = 0; i + 1 < vec.size(); i++) {
            int diff = vec[i+1] - vec[i];
            if (diff < minDiff) {
                minDiff = diff;
                p = i;
                q = i+1;
            }
        }

        return {vec[p], vec[q]};
    }
};
