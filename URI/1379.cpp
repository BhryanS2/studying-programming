#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
  ll a, b;
  while (cin >> a >> b && (a || b)) {
    ll res = 2 * a - b;
    cout << res << endl;    
  }
  return 0;
}