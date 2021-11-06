/*
interif
2021
Problem E
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

/*
f(x)  = {
  x >= 10000000: x - 3
  x < 10000000: f(f(f(x + 13)))
}
*/

int f(int x) {
  if (x >= 10000000) return x - 3;
  return x + 13;
}

int main() {
  int s;
  cin >> s;
  cout << f(s) << endl;

  return 0;
}

/*
g++ E.cpp -o exe && ./exe < input.txt
*/