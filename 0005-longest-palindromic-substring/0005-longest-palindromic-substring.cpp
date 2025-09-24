class Solution {
public:
    string ans="";
    void checkpalindrome(int j,int k,string s)
    {
        while(j>=0 && k<s.length()&&s[j]==s[k])
        {
            j--;
            k++;
        }
        string crrlen=s.substr(j+1,k-j-1);
        if(crrlen.length()>ans.length())
        {
            ans=crrlen;
        }
    }
    string longestPalindrome(string s) {
        int n=s.length();
        if(n<2) return s;
        for(int i=0;i<n;i++)
        {
            checkpalindrome(i,i,s);
            if(i<n-1) checkpalindrome(i,i+1,s);
        }
        return ans; 
    }
};