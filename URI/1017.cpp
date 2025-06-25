/*
beecrowd | 1003
Soma Simples
https://www.beecrowd.com.br/judge/pt/problems/view/1003
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
  double km_l = 12.0;
  int tempo, vm;
  cin >> tempo >> vm;

  int total_km = vm * tempo;
  printf("%.3lf",  total_km / km_l);

  return 0;
}


//g++ 1017.cpp -o exe;cat input.txt | ./exe
