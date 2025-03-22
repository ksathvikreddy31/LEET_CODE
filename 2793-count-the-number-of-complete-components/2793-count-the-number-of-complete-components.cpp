class Solution {
public:
    bool solve(vector<int> &parent,vector<int>& vis,
    unordered_map<int,vector<int>>& mp,int node) {
        queue<int> q;
        q.push(node);
        int noOfVertices = 1;
        int noOfEdges = 0;

        while(!q.empty()) {
            int top = q.front();
            q.pop();

            vis[top] = 1;


            for(auto x: mp[top]) {
                
                if(!vis[x]) {
                    noOfVertices++;
                    parent[x] = top;
                    noOfEdges++;
                    q.push(x);
                    vis[x] = 1;
                }

                else if(parent[x] != top)  {
                    noOfEdges++;
                    parent[x] = top;
                }
            }
        }

        noOfEdges /= 2;
        int ans = noOfVertices * (noOfVertices-1) / 2;

        return  ans == noOfEdges;
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<edges.size(); i++) {
            int a = edges[i][0];
            int b = edges[i][1];

            mp[a].push_back(b);
            mp[b].push_back(a);

            // cout << a << " " 
        }

        // for(int i=0; i<edges.size(); i++) {
        //     cout << i << ": ";
        //    for(auto x: mp[i]) cout << x << " ";
        //     cout << endl;
        // }

        vector<int> parent(n);
        for(int i=0; i<n; i++) {
            parent[i] = i;
        }
        vector<int> vis(n,0);
        int count = 0;

        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                bool ans = solve(parent,vis,mp,i);
                if(ans) count++;
            }
        }

        // for(auto x: parent) {
        //     cout << x << " ";
        // }

        return count;
    }
};