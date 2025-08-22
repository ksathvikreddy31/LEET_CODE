class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i:asteroids){
            if(i>0){
                st.push(i);
            }
            else{
                int num=abs(i);
                bool dest=false;
                while(!st.empty()&&st.top()>0&&num>st.top())
                {
                    st.pop();
                }
                if(!st.empty()&&st.top()>0&&st.top()==num)
                {
                    st.pop();
                    dest=true;
                }
                else if(st.empty()||st.top()<0)
                {
                    st.push(i);
                    dest=true;
                }
            }
        }
        vector<int> res(st.size());
        for (int i = (int)res.size() - 1; i >= 0; i--) {
            res[i] = st.top();
            st.pop();
        }
        return res;
        
    }
};