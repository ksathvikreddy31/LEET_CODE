class Solution {
public:
    int hammingWeight(int n) {
        int c=0;
        string d=bitset<32>(n).to_string();
        for(int i=0;i<d.size();i++)
        {
            if(d[i]=='1')
            {
                c++;
            }
        }
        return c;
        
    }
};