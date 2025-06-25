/*
beecrowd | 1921
Notas e Moedas
https://www.beecrowd.com.br/judge/pt/problems/view/1921
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
  // Guilherme adora brincar com pipas, pipas de várias cores, formas e tamanhos. Ele tem percebido que para as pipas possuírem maior estabilidade, e dessa forma voarem mais alto, elas devem possuir um barbante bem esticado ligando todos os pares de pontas não vizinhas.

  unsigned long long int n;
  cin >> n;
  n = n * (n - 3) / 2;
  cout << n << endl;
  // int res =
  // 5 -> 3 +
  return 0;
}


//g++ 1921.cpp -o exe; cat input.txt | ./exe
