#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
      int r = 0, l = nums.size() - 1;
      while (r <= l) {
        int mid = r + (l - r) / 2;
        if (nums[mid] == target) {
          return mid;
        } else if (nums[mid] < target) {
          r = mid + 1;
        } else {  
          l = mid - 1;
        }
      }
      return -1;  // Target not found

    }
};