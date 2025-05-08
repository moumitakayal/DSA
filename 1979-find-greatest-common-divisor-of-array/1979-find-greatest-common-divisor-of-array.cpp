class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxnum = *max_element(nums.begin(), nums.end());
        int minnum = *min_element(nums.begin(), nums.end());
        int divisor = 0;
        int rem = minnum;
        while(rem > 0)
        {
            divisor = maxnum % minnum;
            if(divisor != 0)
            {
                rem = maxnum/minnum;
                maxnum = minnum;
                minnum = divisor;
                cout << rem << " " << maxnum << " " <<minnum << "\n";
            }
            else
                return minnum;
        }
        return rem;
    }
};