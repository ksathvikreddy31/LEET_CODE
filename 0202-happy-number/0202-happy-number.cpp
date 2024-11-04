class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>seen;
        int r=0;
        while(n!=1 && seen.find(n)==seen.end())
        {
            seen.insert(n);
            int sum=0;
            while(n>0)
            {
                r=n%10;
                sum=sum+(r*r);
                n/=10;
            
            }
            n=sum;
            
        }
        return n==1;
    }
};