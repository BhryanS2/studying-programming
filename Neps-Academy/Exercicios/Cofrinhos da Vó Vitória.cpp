/*
https://neps.academy/br/exercise/635
Cofrinhos da Vó Vitória
Fonte: OBI 2003 - Fase Única
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

#define MAX 300

int main() {
  int n, i, j = 0, a, b;
  while (cin >> n && n != 0) {
    cout << "Teste " << ++j << endl;
    int res = 0;
    REP(i, n) {
      cin >> a >> b;
      res += a - b;
      cout << res << endl;
    }
    cout << endl;
  }
  return 0;
}


//g++ "Cofrinhos da Vó Vitória".cpp -o exe && exe < input.txt
