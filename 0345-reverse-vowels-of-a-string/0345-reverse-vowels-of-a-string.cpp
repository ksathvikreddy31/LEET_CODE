class Solution {
public:
    string reverseVowels(string s) {
    unordered_set<char>vowels{'a','e','i','o','u','A','E','I','O','U'};
    vector<char>list;
    for(char c:s)
    {
        if(vowels.count(c))
        {
            list.push_back(c);
        }
    }
    reverse(list.begin(),list.end());
    string r;
    int ind=0;
    for(char c:s)
    {
        if(vowels.count(c))
        {
            r+=list[ind++];
        }
        else
        {
            r+=c;
        }
    }
        return r;
    }
};