class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp;
        for(char c:magazine){
            mp[c]++;
        }
        for(char ch:ransomNote){
            if(mp[ch]>0){
                mp[ch]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};