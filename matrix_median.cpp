class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
      vector<int> ans;
      for(int i=0;i<matrix.size();i++)
      {
        for(int j=0;j<matrix[0].size();j++)
        {
            ans.push_back(matrix[i][j]);
        }
      }
      sort(ans.begin(),ans.end());
      int low=0,high=ans.size()-1;
      int mid = ans.size() / 2;
      if (ans.size() % 2 == 1) {
        return ans[mid]; // odd number of elements
      }
      else
      {
        return (ans[mid - 1] + ans[mid]) / 2; // average of two middle elements
      }
    }
};

/*

********USING BINARY SEARCH********

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMedian(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        int low = 1;
        int high = 1e9; // Assumes matrix elements are in range 1 to 1e9

        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;

            for (int i = 0; i < r; i++) {
                // upper_bound returns iterator to first element > mid
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }

            if (count < (r * c + 1) / 2) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};


*/