class Solution {
    public:
        vector<int> generateRow(int n)
        {
            int a=1;
            vector<int> res;
            res.push_back(1);
            for(int i=1;i<n;i++)
            {
                a=a*(n-i);
                a=a/i;
                res.push_back(a);
            }
            return res;
        }
    
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ans;
            for(int i=1;i<=numRows;i++)
            {
                ans.push_back(generateRow(i));
            }
            return ans;
        }
    };