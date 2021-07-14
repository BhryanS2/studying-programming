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

#define MAX 300

vector<vector<int> > G;

vector<int> R;

inline void doFail() {
  printf("impossible\n");
  exit(0);
}

inline void doPut(int v, int d) {
  if (R[v] == -d) doFail();
  R[v] = d;
}

pair<int, int> dfs(int v, int d) {
  pair<int, int> r = MP(0, 0);
  if (d == 1) r.F++; else r.S++;
  doPut(v, d);
  REP(t, G[v].size()) {
    int w = G[v][t];
    if (R[w] == 0) {
      pair<int, int> rw = dfs(w, -d);
      r.F += rw.F; r.S += rw.S;
    }
    else {
      if (R[w] == d) doFail();
    }
  }
  return r;
}

int main() {
  int n, m;

  int ret = 0;

  scanf("%d%d", &n, &m);
  R = vector<int>(n, 0);
  G = vector<vector<int> >(n, vector<int>());
  REP(i, m) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    --a; --b;
    int d = c - 1;
    if (d != 0) {
      doPut(a, d);
      doPut(b, d);
    }
    else {
      G[a].PB(b);
      G[b].PB(a);
    }
  }
  REP(v, n) if (R[v] != 0) dfs(v, R[v]);

  REP(v, n) if (R[v] == 1) ret++;

  REP(v, n) if (R[v] == 0) {
    pair<int, int> r = dfs(v, -1);
    ret += min(r.F, r.S);
  }
  printf("%d\n", ret);

  return 0;
}


//g++ exe3.cpp -o exe3.exe && exe3.exe < input.txt
