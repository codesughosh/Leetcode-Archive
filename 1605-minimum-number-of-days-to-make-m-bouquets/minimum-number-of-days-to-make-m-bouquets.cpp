class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int count1=0;
        int count2=0;

        int left=0;
        int right=*max_element(bloomDay.begin(),bloomDay.end());
        int n = bloomDay.size();
        long long z = 1LL * m * k;
        if(n < z)
        {
            return -1;
        }
        while(left <= right)
        {
            int mid = left+(right-left)/2;

            for(int i=0; i<n; i++)
            {
                if(bloomDay[i] <= mid)
                {
                    count1++;
                }
                else
                {
                    count1=0;
                }

                if(count1==k)
                {
                    count2++;
                    count1=0;
                }
            }

            if(count2 < m)
            {
                left=mid+1;
            }
            else if(count2 >= m)
            {
                right=mid-1;
            }
            count1=0;
            count2=0;
        }  

        return left;
    }
};