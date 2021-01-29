/*
https://neps.academy/br/exercise/173
Sequência de Fibonacci
*/
#include <bits/stdc++.h>
using namespace std;

int n, t1, t2=1, prox;

int main() {
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    if (i == 1) {
      cout << t1 << " ";
      continue;
    }
    if (i == 2) {
      cout << t2 << " ";
      continue;
    }
    prox = t1 + t2;
    t1 = t2;
    t2 = prox;

    cout << prox << " ";
  }
  return 0;
}

