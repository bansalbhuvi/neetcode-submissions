class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(), cols=matrix[0].size();
        int top=0, bot=rows-1;
        
        while(top<=bot){
            int ROW= (top+bot)/2;
            if(target>matrix[ROW][cols-1]){
                top= ROW+1;
            }
            else if(target<matrix[ROW][0]){
                bot= ROW-1;
            }
            else break;
        }
        if(!(top<=bot)){
            return false;
        }
        int l=0, r= cols-1;
        int row= (top+bot)/2;
                while(l<=r){
            int m= (l+r)/2;
            if(target > matrix[row][m]){
                l= m+1;
            }
            else if(target<matrix[row][m]){
                r= m-1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
