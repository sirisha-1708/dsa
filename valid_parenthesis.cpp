class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        char x;
        int n=s.size(),c=0;
        if(n==1||n%2!=0)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                a.push(s[i]);
            }
            else
            {
                if(a.empty())
                {
                    return false;
                }
                x=a.top();
                a.pop();
                if(x=='('&&s[i]==')')
                {
                    c++;
                }
                else if(x=='['&&s[i]==']')
                {
                    c++;
                }
                else if(x=='{'&&s[i]=='}')
                {
                    c++;
                }
            }
        }
        if(c==n/2)
        {
            return true;
        }
        return false;
        /* code in comments will not work
        int n=s.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('&&s[i+1]==')'||s[i]=='['&&s[i+1]==']'||s[i]=='{'&&s[i+1]=='}')
            {
                c++;
            }
        }
        if(c==n/2)
        return true;
        else
        return false;*/
    }
};