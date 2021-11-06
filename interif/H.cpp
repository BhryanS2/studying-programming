/*
interif
2021
Problem H
resolvido
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
  double vacinados, populacao_total;
  cin >> populacao_total >> vacinados;
  double porcentagem_vacinados = (double)vacinados / populacao_total;
  cout << fixed << setprecision(1) << porcentagem_vacinados * 100 << "%" << endl;

  return 0;
}

/*
g++ H.cpp -o exe && ./exe < input.txt
*/
