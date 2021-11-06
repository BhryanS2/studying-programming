/*
interif
2021
Problem D
Não resolvido
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const int MAX = 1e5;


int main() {
  int n;
  while (scanf("%d", &n) && n != EOF) {
    int ans = 0;
    if (n == 1) {
      cout << ans << endl;
      continue;
    }
    while (n != 1) {
      if (n % 2 == 0) {
        n /= 2;
      }
      else {
        n = 3 * n + 1;
      }
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}

/*
g++ D.cpp -o exe && ./exe < input.txt
*/