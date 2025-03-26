class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>vec;
        int rem=grid[0][0]%x;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]%x!=rem)
                {
                    return -1;
                }
                vec.push_back(grid[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        int n=vec.size();
        int med=n/2;
        int sps=0;
        for(int i=0;i<n;i++)
        {
            sps+=abs(vec[i]-vec[med])/x;
        }
        return sps;
        
    }
};