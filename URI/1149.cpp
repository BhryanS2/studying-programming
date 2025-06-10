#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a = 0;
  cin >> n;
  while (cin >> a && a < 1);
  int soma = 0;
  for (int i = n; i < n+a; i++)
  {
    soma += i;
  }

  cout << soma << endl;

}
