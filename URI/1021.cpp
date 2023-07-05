/*
beecrowd | 1021
Notas e Moedas
https://www.beecrowd.com.br/judge/pt/problems/view/1021
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
  double n;
  cin >> n;

  int notas[6] = { 100, 50, 20, 10, 5, 2 };
  int moedas[6] = { 100, 50, 25, 10, 5, 1 };
  int qtdNotas[6] = { 0, 0, 0, 0, 0, 0 };
  int qtdMoedas[6] = { 0, 0, 0, 0, 0, 0 };
  int resto = n * 100;
  REP(i, 6) {
    qtdNotas[i] = resto / (notas[i] * 100);
    resto = resto % (notas[i] * 100);
  }
  REP(i, 6) {
    qtdMoedas[i] = resto / moedas[i];
    resto = resto % moedas[i];
  }
  cout << "NOTAS:" << endl;
  REP(i, 6) {
    cout << qtdNotas[i] << " nota(s) de R$ " << notas[i] << ".00" << endl;
  }
  cout << "MOEDAS:" << endl;
  REP(i, 6) {
    cout << qtdMoedas[i] << " moeda(s) de R$ " << setprecision(2) << fixed << moedas[i] / 100.0 << endl;
  }
  return 0;
}


//g++ 1021.cpp -o exe && ./exe < input.txt
