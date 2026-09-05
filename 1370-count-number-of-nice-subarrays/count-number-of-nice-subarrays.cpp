class Solution {
public:
    int nice(vector<int>& nums, int k) {
        if(k<0)
        {
            return 0;
        }
        int left=0;
        int odd=0;
        int count=0;

        for(int right=0; right<nums.size(); right++)
        {
            if(nums[right]%2==1)
            {
                odd++;
            }

            while(odd > k)
            {
                if(nums[left]%2==1)
                {
                    odd--;
                }
                left++;
            }
            count += right-left+1;
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return nice(nums,k) - nice(nums,k-1);
    }
};