class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median = 0.0f;
        for(int i : nums2)
            nums1.push_back(i);
        sort(nums1.begin(), nums1.end());
        for(int i : nums1)
            printf("%d ", i);

        //printf("index %.6f", index);
        if(nums1.size()%2 == 0)
        {
            float index = ceil(nums1.size()/2);
            printf("index %f", index);
            int sum = nums1.at(index) + nums1.at(index-1);
            printf("sum %f", sum);
            median = (float)sum/2;
        }
        else
        {
            float index = floor(nums1.size()/2);
            median = nums1.at(index);
        }
        return median;
    }
};