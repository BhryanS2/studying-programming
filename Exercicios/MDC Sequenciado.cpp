#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> nums;

int mdc(int a, int b){
  return b == 0 ? a : mdc(b, a % b);
}

int mdc_sequencido(int i) {
  if(i == n - 2) return mdc(nums[i], nums[i + 1]);
  return mdc(nums[i], mdc_sequencido(i + 1));
}

int main() {
  cin >> n;

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    nums.push_back(temp);
  }

  cout << mdc_sequencido(0) << endl;

}
