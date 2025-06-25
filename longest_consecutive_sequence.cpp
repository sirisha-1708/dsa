class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            int n=nums.size();
            if(n==0) return 0;
            sort(nums.begin(),nums.end());
            int count=1,maxi=INT_MIN;
            for(int i=1;i<n;i++)
            {
                if(nums[i-1]+1==nums[i])
                {
                    count++;
                }
                else
                {
                    if(nums[i-1]==nums[i]) continue;
                    maxi=max(count,maxi);
                    count=1;
                }
            }
            return max(count,maxi);
        }
    };