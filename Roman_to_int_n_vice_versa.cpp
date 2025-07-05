class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        unordered_map<char, int> temp = {
            {'I', 1},
            {'V', 5},
            {'X', 10}, 
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int n=s.size();
        for (int i = 0; i < s.length(); i++) 
        {
            int current = temp[s[i]], next=0;
            next = temp[s[i + 1]];
            if (current < next) 
            {
                res -= current;
            }
            else 
            {
                res += current;
            }
        }
        return res;
    }
};