class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        while(low <=high)
        {
            int mid=(low+high)/2;
            cout << "mid " <<mid;
            if(target == nums[mid])
            {
                return mid;
            }
            else if(nums[low] <= nums[mid]) //1st part is sorted
            {
                if(nums[low] <= target && target < nums[mid]) //target lies in 1st part?
                {
                    high = mid -1;
                }
                else
                    low = mid + 1;
            }
            else //2nd part is sorted
            {
                if(nums[mid] < target && target <= nums[high]) //if target lies in the 2nd part
                {
                    low = mid + 1;
                }
                else
                    high = mid -1;
            }
        }
        return -1;
    }
};