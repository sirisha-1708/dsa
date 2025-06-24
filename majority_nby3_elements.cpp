class Solution {
    public:
        vector<int> majorityElement(vector<int>& nums) {
            int n=nums.size();
            unordered_map<int,int> res;
            vector<int> result;
            for(auto i:nums)
            {
                res[i]++;
            }
            for(auto i:res)
            {
                if(i.second > n/3)
                {
                    result.push_back(i.first);
                }
            }
            return result;
        }
    };