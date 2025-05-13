class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int tl[1001]={0};
        int cp=0;
        for(auto&t:trips)
        {
            int noofpass=t[0];
            int f=t[1];
            int to=t[2];
            tl[f]+=noofpass;
            tl[to]-=noofpass;
        }
        for(int i=0;i<1001;i++)
        {
            cp+=tl[i];
            if(cp>capacity)
            {
                return false;
            }
        }
        return true;
    }
};