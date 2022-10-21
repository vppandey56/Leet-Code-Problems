class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>ans;
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=m-1;
        while(left<=right && top<=bottom){
            for(int i=left; left<=right && top<=bottom && i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int j=top; left<=right && top<=bottom && j<=bottom;j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            for(int i=right; left<=right && top<=bottom && i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            for(int j=bottom; left<=right && top<=bottom && j>=top;j--){
                ans.push_back(matrix[j][left]);
            }
            left++;
        }
        return ans;
        
    }
};
