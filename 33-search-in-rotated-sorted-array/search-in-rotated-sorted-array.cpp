class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int n = nums.size() - 1;
        int right = n;

        while(left<right)
        {
            int mid = left + (right-left)/2;

            if(nums[mid]>nums[right])
            {
                left=mid+1;
            }
            else
            {
                right=mid;
            }
        }

        if (target >= nums[left] && target <= nums[n])
        {
            right=n;
        }
        else
        {
            right=left-1;
            left=0;
        }


        while(left<=right)
        {
            int mid=left+(right-left)/2;

            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }

        return -1;
    }
};