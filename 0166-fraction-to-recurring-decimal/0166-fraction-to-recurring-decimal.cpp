class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";
        
        string ans;
        
        // handle sign
        if ((numerator < 0) ^ (denominator < 0)) ans += "-";
        
        long long num = llabs((long long)numerator);
        long long den = llabs((long long)denominator);
        
        // integer part
        ans += to_string(num / den);
        long long rem = num % den;
        
        if (rem == 0) return ans;  // no fractional part
        
        ans += ".";
        
        // store remainder positions to detect cycle
        unordered_map<long long, int> mp;
        
        while (rem != 0) {
            if (mp.find(rem) != mp.end()) {
                // cycle detected
                ans.insert(mp[rem], "(");
                ans += ")";
                break;
            }
            
            mp[rem] = ans.size(); // store index before adding next digit
            rem *= 10;
            ans += to_string(rem / den);
            rem %= den;
        }
        
        return ans;
    }
};
