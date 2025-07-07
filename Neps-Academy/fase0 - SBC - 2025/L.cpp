#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll m; cin >> m;
  ll total = 8LL * 1000000LL * m;
  int n = 0;
  ll power = 1;
  while (power < total) {
    power *= 2;
    n++;
  }
  cout << n << endl;
}