class Solution {
public:
    char res(vector<int>&freq)
    {
        char c='#';
        int minf=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(freq[i]<minf)
            {
                minf=freq[i];
                c='a'+i;
            }
        }
        freq[c-'a']++;
        return c;
    }
    string minimizeStringValue(string s) {
        string rep;
        vector<int>freq(26,0);
        for(char ch:s)
        {
            if(ch!='?') freq[ch-'a']++;
        }
        for(char ch:s)
        {
            if(ch=='?') rep.push_back(res(freq));
        }
        sort(rep.begin(),rep.end());
        int j=0;
        for(char& ch:s)
        {
            if(ch=='?') ch=rep[j++];
        }
        return s;
    }
};