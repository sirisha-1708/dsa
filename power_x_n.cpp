class Solution {
    public:
        double myPow(double x, int n) {
            if(n==0) return 1;
            long long nn=n;
            int hlp=1;
            double ans=1;
            if(nn<0)
            {
                nn=-nn;
                x=1/x;
            }
            while(nn>0)
            {
                if(nn%2==1)
                {
                    ans=ans*x;
                    nn=nn-1;
                }
                else
                {
                    x=x*x;
                    nn=nn/2;
                }
            }
            return ans;
        }
    };