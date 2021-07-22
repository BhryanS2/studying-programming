/*
https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/aeroporto
Aeroporto
OBI 2002
success
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

int trafegoAeroporto[110];

int main() {
  int a, v, teste = 0, i;
  scanf("%d%d", &a, &v);

  while (a != 0 && v != 0) {
    memset(trafegoAeroporto, 0, sizeof(trafegoAeroporto));

    REP(i, v) {
      int x, y;
      scanf("%d%d", &x, &y);
      trafegoAeroporto[x - 1]++;
      trafegoAeroporto[y - 1]++;
    }

    int tam = -1;
    vector<int> ans;

    REP(i, a) {
      if (trafegoAeroporto[i] > tam) {
        ans.clear();
        ans.PB(i + 1);
        tam = trafegoAeroporto[i];
      } else if (trafegoAeroporto[i] == tam) ans.PB(i + 1);
    }

    printf("Teste %d", ++teste);
    REP(i, ans.size()) printf("%d ", ans[i]);
    printf("\n");

    scanf("%d%d", &a, &v);
  }
  return  0;
}

//g++ aeroporto.cpp -o aeroporto && aeroporto < input.txt
