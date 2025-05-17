class Solution {
public:
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> paths;
        helper(nums, paths, res);
        return res;
    }
    void helper(vector<int>& nums, vector<int> paths, vector<vector<int>>& result)
    {
        if(paths.size() == nums.size())
            result.push_back(paths);
        for(int i=0; i <nums.size(); i++)
        {
            auto it = find(paths.begin(), paths.end(),nums[i]);
            if(it != paths.end())
                continue;
            paths.push_back(nums[i]);
            helper(nums, paths, result);
            paths.pop_back();
        }
    }
    // void helper(vector<int> arr, int index, vector<int>& ans)
    //  {
    //       if(index == arr.size())
    //       {
    //            ans.push_back(input[index]);
    //            return;
    //       }
    //       helper(arr,index+1, ans);
    //       helper(arr, index, ans);
    //  }
    // vector<vector<int>> permute(vector<int>& nums) {
    //     vector<int> ans;
    //       helper(nums,0,ans);
    //       vector<vector<int>> res;
    //       res.push_back(ans);
    //       return res;
    // }
};