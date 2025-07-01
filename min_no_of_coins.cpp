class Solution{
	public:
	int MinimumCoins(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int i=coins.size()-1,res=0;
        while(i>=0)
        {
            if(amount>=coins[i])
            {
                res+=(amount/coins[i]);
                amount=amount%coins[i];
            }
            i--;
        }
        if(amount>0) return -1;
        return res;
    }
};