class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int tl[1001]={0};
        int cp=0;
        for(auto&trip:trips)
        {
            int noofpass=trip[0];
            int from=trip[1];
            int to=trip[2];
            tl[from]+=noofpass;
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