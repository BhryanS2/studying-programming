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
  int hi, mi, hf, mf;
  cin >> hi >> mi >> hf >> mf;
  int hora;
  if (hi == hf && mf == mi) {
    hora = 24;
  }
  else if (hi == hf && mf < mi) {
    hora = 24;
  }
  else if (hi > hf) {
    hora = (24 - hi) + hf;
  } else {
    hora = hf - hi;
  }

  int minutos_totais = hora * 60;
  int res_m = mf - mi;
  minutos_totais = minutos_totais + res_m;

  cout << "O JOGO DUROU " << (minutos_totais / 60) << " HORA(S) E " << (minutos_totais % 60) << " MINUTO(S)" << endl;
  return 0;
}


//g++ 1047.cpp -o exe; cat input.txt | ./exe
