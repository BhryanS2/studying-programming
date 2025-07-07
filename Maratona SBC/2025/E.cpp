#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  int n, quantidade_trocas = 0;
  cin >> n;
  unordered_map<int, vector<int> > mapa_posicoes;
  vector<pair<int, int> > res;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    res.push_back(make_pair(x, y));
    mapa_posicoes[x].push_back(i);
    mapa_posicoes[y].push_back(i);
  }

  for (int i = 0; i < n; i++)
  {
    int x = res[i].first;
    int y = res[i].second;
    cout << "Analisando " << x << " e " << y << endl;
    if (x == y) continue;
    for (int pos : mapa_posicoes[x]) {
      // se a posição for diferente da atual
      if (pos != i) {
        // se a posição for diferente de y
        cout << "Tentando trocar " << res[i].first << " e " << res[i].second << " com " << res[pos].first << " e " << res[pos].second << endl;
        if (res[pos].first != y && res[pos].second != y) {
          // troca os valores
          swap(res[i], res[pos]);
          quantidade_trocas++;
          // atualiza o mapa de posições
          mapa_posicoes[res[i].first].push_back(i);
          mapa_posicoes[res[i].second].push_back(i);
          mapa_posicoes[res[pos].first].push_back(pos);
          mapa_posicoes[res[pos].second].push_back(pos);
          break; // sai do loop para evitar múltiplas trocas
        }
      }
    }
  }
  
  cout << quantidade_trocas << endl;

  return 0;
}


//g++ E.cpp -o exe;cat input.txt | ./exe
