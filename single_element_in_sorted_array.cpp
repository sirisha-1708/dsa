class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]!=nums[i+1]) return nums[i];
                else i++;
            }
        }
        return nums[n-1];
    }
};