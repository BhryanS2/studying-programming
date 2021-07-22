/*
https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/ta-ligado
Tá Ligado?
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

const int MAXN = 10e5 + 100;

vector<int> v[MAXN];

int indexOf(int pos, int value) {
  return int(find(v[pos].begin(), v[pos].end(), value) != v[pos].end());
}

int main() {
  int m, n, i;
  scanf("%d%d", &n, &m);

  REP(i, m){
    int t, a, b;
    scanf("%d %d %d", &t, &a, &b);
    if (t) {
      v[a].PB(b);
      v[b].PB(a);
    } else printf("%d\n", indexOf(a, b));
  }
  return  0;
}

//g++ taligado.cpp -o taligado && taligado < input.txt
