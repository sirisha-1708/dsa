class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int,int> freq;
            int res=0;
            for(int i=0;i<nums.size();i++)
            {
                freq[nums[i]]++;
            }
            for(auto x:freq)
            {
                if(x.second>(nums.size()/2))
                {
                    res=x.first;
                }
            }
            return res;
        }
    };