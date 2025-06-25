class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int right=0,left=0,maxi=0;
            unordered_set<char> temp;
            while(right<s.length())
            {
                if(!temp.count(s[right]))
                {
                    temp.insert(s[right]);
                    int hlp=temp.size();
                    maxi=max(maxi,hlp);
                    right++;
                }
                else
                {
                    temp.erase(s[left]);
                    left++;
                }
            }
            return maxi;
        }
    };