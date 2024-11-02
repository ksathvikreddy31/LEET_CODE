class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int p=s.size()-1;
        while(p>=0 && s[p]==' ')
        {
            p--;
        }
        for(int i=p;i>=0;i--)
        {
            
            if(s[i]==' ')
            {
                break;
            }
            c=c+1;
        }
        return c;
        
    }
};