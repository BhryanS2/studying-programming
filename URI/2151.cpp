/*
beecrowd | 2151
Soco do Rulk
https://www.beecrowd.com.br/judge/pt/problems/view/2151
success
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef unsigned long long int ulli;
typedef long long int ll;


#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000
void aplicar_soco(vector<vector<int>>& matriz, int x, int y, int m, int n) {
  int impacto = 10;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      // distância circular | Manhattan | Taxicab
      // int distancia = abs(i - (x - 1)) + abs(j - (y - 1));

      // 0 0 0                9  9 9
      // 0 10 0 -> aumento -> 9 10 9
      // 0 0 0                9  9 9
      // calculo de distância por pitágoras
      // d = raiz[(x2-x1)^2+(y2-y1)^2]
      // int distancia = sqrt(pow(i - (x - 1), 2) + pow(j - (y - 1), 2));
      // int aumento = max(1, impacto - distancia);
      // matriz[i][j] += aumento;
      
      // cout << distancia << " ";


      // distância de Chebyshev
      int distancia = max(abs(i-(x-1)), abs(j-(y-1)));
      
      int aumento = max(1, impacto - distancia);
      matriz[i][j] += aumento;
      
    }
    // cout << endl;
  }
}


int main() {
  int c;
  cin >> c;
  for (int caso = 1; caso <= c; ++caso) {
    int m, n, x, y;
    cin >> m >> n >> x >> y;
    vector<vector<int>> matriz(m, vector<int>(n));

    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        cin >> matriz[i][j];
      }
    }

    aplicar_soco(matriz, x, y, m, n);

    cout << "Parede " << caso << ":\n";
    for (const auto& linha : matriz) {
      for (size_t j = 0; j < linha.size(); ++j) {
        if (j > 0) cout << " ";
        cout << linha[j];
      }
      cout << "\n";
    }
  }
  return 0;
}


//g++ 1161.cpp -o exe && ./exe < input.txt
