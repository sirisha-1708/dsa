class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int x=nums[0];
            int n=nums.size();
            for(int i=0;i<nums.size()-1;i++)
            {
                if(x==nums[i+1])
                {
                    nums.erase(nums.begin()+i);
                    i--;
                }
                else
                {
                    x=nums[i+1];
                }
            }
            return nums.size();
        }
    };