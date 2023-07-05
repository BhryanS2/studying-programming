/*
beecrowd | 1018
Cédulas
https://www.beecrowd.com.br/judge/pt/problems/view/1018
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
  int n;
  cin >> n;
  int notas[7] = {100, 50, 20, 10, 5, 2, 1};
  int qtd[7] = {0, 0, 0, 0, 0, 0, 0};
  int resto = n;
  REP(i, 7) {
    qtd[i] = resto / notas[i];
    resto = resto % notas[i];
  }
  cout << n << endl;
  REP(i, 7) {
    cout << qtd[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
  }

  return 0;
}


//g++ 1018.cpp -o exe && ./exe < input.txt
