class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
      vector<int> res;
      for(int i=0;i<a.size();i++)
      {
        res.push_back(a[i]);
      }
      for(int i=0;i<b.size();i++)
      {
        res.push_back(b[i]);
      }
      sort(res.begin(),res.end());
      if(k>res.size()) return -1;
      return res[k-1];
  }
};