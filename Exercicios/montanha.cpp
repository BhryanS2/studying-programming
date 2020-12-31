#include <bits/stdc++.h>
using namespace std;
int main() {
  int m, x;
  int v[1005];

  cin >> m;

  for (int i = 0; i <= m; i++) {
    v[i] = 0;
  }

  for (int i = 0; i < m; i++) {
    cin >> x;
    v[i] = x;
  }

  int r = 0;

  for (int i = 0; i < m; i++) {
    if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
      r = r + 1;
    }

  }

  if (r > 1) {
    cout << "S";
  } else {
    cout << "N";
  }

  return 0;
}
