class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int n=nums1.size(),m=nums2.size(),count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    count++;
                    for(int k=j+1;k<m;k++)
                    {
                        if(nums2[k]>nums2[j])
                        {
                            res.push_back(nums2[k]);
                            break;
                        }
                    }
                    if(res.size()<count)
                    {
                        res.push_back(-1);
                    }
                    break;
                }
            }
        }
        return res;
    }
};


/*

*******USING STACK*******

class Solution {
public:
  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mp;
    stack<int> st;

    for(int i=nums2.size()-1; i>=0; i--){
      while(!st.empty() && st.top() < nums2[i]){
        st.pop();
      }
      if(st.empty() || st.top() < nums2[i]) mp[nums2[i]] = -1;
      else mp[nums2[i]] = st.top();
      st.push(nums2[i]);
    }

    vector<int> solution;
    for(int i=0; i<nums1.size(); i++){
      solution.push_back(mp[nums1[i]]);
    }


    return solution;
  }
};

*/