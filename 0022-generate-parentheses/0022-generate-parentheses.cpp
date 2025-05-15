class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp;
        helper(n,0,0, res, temp);
        return res;
    }
    void helper(int n, int open, int close, vector<string>& arr, string temp)
    {
        if((open == close) && (temp.size() == n*2)) //base condition
        {
            arr.push_back(temp);
            return;
        }
        if( open < n) //add open bracket
        {
            helper(n,open+1,close, arr, temp+"(");
        }
        if(open > close) //add close bracket
        {
            helper(n,open,close+1, arr, temp+")");
        }
        
    }
};