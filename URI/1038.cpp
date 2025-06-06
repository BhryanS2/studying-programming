/*

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

struct lanchesData
{
  double valor;
};


lanchesData laches[5];


int main() {
  laches[0].valor = 4.0;
  laches[1].valor = 4.5;
  laches[2].valor = 5.0;
  laches[3].valor = 2.0;
  laches[4].valor = 1.5;

  int cod, qtd;

  cin >> cod >> qtd;

  double res = laches[cod - 1].valor * qtd;
  printf("Total: R$ %.2lf\n", res);

  return 0;
}


//g++ 1038.cpp -o exe; cat input.txt | ./exe
