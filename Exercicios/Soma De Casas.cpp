/*
O(N)
https://neps.academy/br/exercise/255
Soma de Casas
*/
#include <bits/stdc++.h>
const int MAX = 10e5 + 100;
using namespace std;

int v[MAX];

int main() {

  int n, somaTotal, casa1, casa2;

  cin >> n;

  for (int i = 1; i <= n; i++) cin >> v[i];

  cin >> somaTotal;

  for (int l = 1, r = n; l < r;) {
    if (v[l] + v[r] == somaTotal) {
      casa1 = v[l];
      casa2 = v[r];
      break;
    }

    if (v[l] + v[r] < somaTotal) l++;
    if (v[l] + v[r] > somaTotal) r--;

  }

  cout << casa1 << " " << casa2 << endl;

  return 0;
}
