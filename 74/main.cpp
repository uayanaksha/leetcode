class Solution {
public:
    vector<int> getxy(int x, int r, int c){
        return {x/c, x%c};
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {   
        int R = matrix.size();
        int C = matrix[0].size();
        bool flag = false;
        int l = 0, r = R*C - 1, mid = l + (r-l)/2;
        vector<int> v = getxy(mid, R, C); 
        int x = v[0], y = v[1];
        while(l <= r){
            mid = l + (r-l)/2;
            v = getxy(mid, R, C);
            x = v[0], y = v[1];
            if(matrix[x][y] == target){
                flag = true;
                break;
            } else if(matrix[x][y] < target){
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return flag;
    }
};
