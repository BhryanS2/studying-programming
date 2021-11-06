/*
interif
2021
Problem K
Não resolvido
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
  /*
  Quantidade de pedaç 
  Preço  3,00  4,00  8,00  9,00  12,00
  */
  int pedacos_cortados;
  double pedacos[pedacos_cortados];
  for (int i = 1; i <= pedacos_cortados; i++) {
    cin >> pedacos[i];
  }

  // achar a menor combinacao de precos a levar todo o bolo
  double menor_preco = INF;
  for (int i = 1; i <= pedacos_cortados; i++) {
    double preco_atual = pedacos[i];
    if (preco_atual < menor_preco) {
      menor_preco = preco_atual;
    }
  }

  return 0;
}

/*
g++ exe.cpp -o exe && ./exe < input.txt
*/