class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int startrow=0, endcol=col-1;
        
        while(startrow<row && endcol>=0){
            int element=matrix[startrow][endcol];
            if(element==target){
                return true;
            }
            else if(element>target){
                endcol--;
            }
            else{
                startrow++;
            }
        }
        return false;
        
    }
};
