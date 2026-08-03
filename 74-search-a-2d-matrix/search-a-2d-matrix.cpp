class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;
        int top=0;
        int bottom=m;
        int row=-1;
        
        if(m==0)
        {
            row=0;
        }
        else
        {
            while(top<=bottom)
        {
            int mid=top+(bottom-top)/2;

            if(matrix[mid][0] <= target && target <= matrix[mid][n])
            {
                row=mid;
                break;
            }
            
            else if(matrix[mid][n] < target)
            {
                top=mid+1;
            }
            else
            {
                bottom=mid-1;
            }
        }
        }

        if(row==-1)
        {
            return false;
        }

        int left=0;
        int right=n;

        while(left<=right)
        {
            int mid=left+(right-left)/2;

            if(matrix[row][mid]==target)
            {
                return true;
            }
            else if(matrix[row][mid]<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }

        return false;
    }
};