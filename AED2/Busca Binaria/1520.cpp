#include <bits/stdc++.h>
using namespace std;

int binary_search_low(const vector<int>& v, int target) {
  int l = 0, r = v.size();
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (v[mid] < target)
      l = mid + 1;
    else
      r = mid;
  }
  return l;
}

int binary_search_high(const vector<int>& v, int target) {
  int l = 0, r = v.size();
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (v[mid] <= target)
      l = mid + 1;
    else
      r = mid;
  }
  return l;
}

int main() {
  int n;
  while (cin >> n) {
    vector<int> box;

    for (int i = 0; i < n; ++i) {
      int x, y;
      cin >> x >> y;
      for (int j = x; j <= y; ++j) {
        box.push_back(j);
      }
    }

    sort(box.begin(), box.end());

    int num;
    cin >> num;

    int first_index = binary_search_low(box, num);
    int last_index = binary_search_high(box, num);

    if (first_index < box.size() && box[first_index] == num) {
      cout << num << " found from " << first_index << " to " << last_index - 1 << endl;
    }
    else {
      cout << num << " not found" << endl;
    }
  }
  return 0;
}
