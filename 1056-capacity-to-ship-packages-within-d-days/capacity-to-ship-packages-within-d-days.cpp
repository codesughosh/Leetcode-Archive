class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = 0;
        int count =0;
        for (int weight : weights) 
        {
            right += weight;
        }

        int sum = 0;
        int count2 = 1;

        while(left<=right)
        {
            int mid=left+(right-left)/2;

            for(int i=0; i <weights.size(); i++)
            {
                if(sum + weights[i] > mid)
                {
                    sum=weights[i];
                    count2++;
                }
                else
                {
                    sum += weights[i];
                }
            }

            if(count2>days)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
            sum=0;
            count=0;
            count2=1;
        }
        return left;
    }
};