/*
https://neps.academy/br/exercise/311
Contar bits
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

int main() {
  li n;
  cin >> n;
  li cont = 1;

  while (1) {
    if (n % 2 == 1) cont++;
    if (n / 2 <= 1) break;
    n = n / 2;
  }

  cout << cont;
}
