class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum=0;
        int j=n-1;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            if(i!=j){
            sum+=mat[j][i];
            }
            j--;   
        }
        return sum;
    }
};
