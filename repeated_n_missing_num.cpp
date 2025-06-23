//Set Mismatch -leet code 645
class Solution {
    public:
        vector<int> findErrorNums(vector<int>& nums) {
            int n=nums.size();
            vector<int> res;
            unordered_map<int,int> freq;
            for(int i=0;i<n;i++)
            {
                if(freq.count(nums[i]))
                {
                    res.push_back(nums[i]);
                }
                else
                {
                    freq[nums[i]]++;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(freq[i+1]<1)
                {
                    res.push_back(i+1);
                }
            }
            return res;
        }
    };