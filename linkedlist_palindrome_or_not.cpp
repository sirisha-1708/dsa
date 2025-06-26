class Solution {
    public:
        bool isPalindrome(ListNode* head) {
            vector<int> res;
            while (head) 
            {
                res.push_back(head->val);
                head = head->next;
            }
            int left = 0, right = res.size() - 1;
            while (left < right) 
            {
                if(res[left] != res[right]) return false;
                left++;
                right--;
            }
            return true;
        }
    };