#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef long long int ll;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define Pb push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MaX 100000000

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, i;
  ll k;
  cin >> n >> k;
  vector<ll> a(n);
  FOR(i, 0, n - 1) cin >> a[i];
  vector<ll> b(2 * n);
  FOR(i, 0, 2 * n - 1)  b[i] = a[i % n];
  
  vector<int> ans(n);
  
  FOR(i, 0, n - 1) {
    int baixo = 1, cima = n - 1, ret = 0;
    while (baixo <= cima) {
      int meio = (baixo + cima) / 2;
      ll fase = a[i] + meio * k;
      if (fase > b[i + meio]) {
        ret = meio;
        cima = meio - 1;
      } else {
        baixo = meio + 1;
      }
    }
    ans[i] = ((i + (ret ? ret : n)) % n) + 1;
  }

  for (int i = 0; i < n; ++i)
    cout << ans[i] << (i + 1 == n ? '\n' : ' ');
}


//g++ J.cpp -o exe;cat input.txt | ./exe
