class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // for(int i=0, i< intervals.size(), i++)
        // {
        //     for(int j=0; j< intervals.size()-i-1, j++)
        //     {
        //         if(intervals[j] > intervals[j+1])
        //         {
        //             int temp = intervals[j];
        //             intervals[j] = intervals[j+1];
        //             intervals[j+1] = temp;
        //         }
        //     }
        // }
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        vector<int> temp = intervals[0];
        for(int i=1; i< intervals.size(); i++)
        {
            if(intervals[i][0] <= temp[1])
            {
                temp[1] = max(temp[1], intervals[i][1]);
            }
            else
            {
                ans.push_back(temp);
                temp = intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;
    }
};