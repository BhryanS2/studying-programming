/*
beecrowd | 1010
Cálculo Simples
https://www.beecrowd.com.br/judge/pt/problems/view/1010
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

#define MAX 100000000

int main() {
  int codigo1, numeroDePecas1, codigo2, numeroDePecas2;
  double valorUnitario1, valorUnitario2;
  cin >> codigo1 >> numeroDePecas1 >> valorUnitario1;
  cin >> codigo2 >> numeroDePecas2 >> valorUnitario2;
  double valorTotal = numeroDePecas1 * valorUnitario1 + numeroDePecas2 * valorUnitario2;
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valorTotal << endl;

  return 0;
}


//g++ exe.cpp -o exe && ./exe < input.txt
