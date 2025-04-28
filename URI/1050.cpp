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

int main() {
  int ddd;
  cin >> ddd;
  switch (ddd)
  {
  case 61:
    printf("Brasilia\n");
    break;

  case 71:
    printf("Salvador\n");
    break;
  case 11:
    printf("Sao Paulo\n");
    break;
  case 21:
    printf("Rio de Janeiro\n");
    break;
  case 32:
    printf("Juiz de Fora\n");
    break;
  case 19:
    printf("Campinas\n");
    break;
  case 27:
    printf("Vitoria\n");
    break;
  case 31:
    printf("Belo Horizonte\n");
    break;

  default:
    printf("DDD nao cadastrado\n");
    break;
  }

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
