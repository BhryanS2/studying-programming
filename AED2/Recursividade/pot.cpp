/*
Aula | exercicios | Recursividade
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

int pot_r(int a, int b) {
  if (b == 0) return 1;
  return a * pot_r(a, b - 1);
}

int pot_i(int a, int b) {
  int res = a;
  for (int i = 1; i < b; i++)
  {
    res *= a;
  }

  return res;
}


int main() {
  cout << pot_r(2, 4) << endl;
  cout << pot_i(2, 4) << endl;
  return 0;
}


//g++ -O0 pot.cpp -o exe; ./exe
