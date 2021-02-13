#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
  cin >> n;
  cout << (n % 3 == 0 && n % 7 == 0 ? "Divisivel" : "Nao divisivel") << endl;
}
