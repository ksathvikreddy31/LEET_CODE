#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        // Initialize vectors with size 128 (covering ASCII characters)
        vector<int> inds(128, 0);
        vector<int> indt(128, 0);

        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (inds[s[i]] != indt[t[i]]) {
                return false;
            }
            // Mark the latest index + 1 for both characters
            inds[s[i]] = i + 1;
            indt[t[i]] = i + 1;
        }
        return true;
    }
};
