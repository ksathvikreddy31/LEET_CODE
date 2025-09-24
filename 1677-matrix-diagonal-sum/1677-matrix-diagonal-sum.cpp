class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int si = mat.size();
        int sum = 0;

        for(int i=0;i<si;i++){
            sum += mat[i][i];

            if(i!= (si-i-1)){
                sum+=mat[i][si-i-1];
            }
        }


        return sum ;
        
    }
};