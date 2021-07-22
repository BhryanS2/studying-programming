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

#define MAXN 300
#define INF 10000

int dist[MAXN];
int n, i, j, a, b;
int grafo[MAXN][MAXN], cost[MAXN][MAXN];
bool visited[MAXN] = { 0 };
int parent[MAXN];

void init() {
  REP(i, n) {
    parent[i] = i;
    dist[i] = INF;
  }
  dist[0] = 0;
}

int getNearest() {
  int minimun = INF;
  int minNode = 0;
  REP(i, n) {
    if (!visited[i] && dist[i] < minimun) {
      minimun = dist[i];
      minNode = i;
    }
  }
  return minNode;
}

void dijkstra() {
  REP(i, n) {
    int nearest = getNearest();
    visited[nearest] = true;

    REP(j, n) {
      if (cost[nearest][j] != INF &&
        dist[j] < dist[nearest] + cost[nearest][j]) {
        dist[j] = dist[nearest] + cost[nearest][j];
        parent[j] = nearest;
        cout << parent[j] << endl;
      }
    }
  }
}

int main() {
  cin >> n;

  REP(i, n) {
    cin >> a >> b;
    int x, y;
    REP(x, a) {
      REP(y, b) {
        char s;
        cin >> s;
        if (s == '.') {
          cost[x][y] = 1;
        }
        else if (s == '*') {
          cost[x][y] = INF;
        }
        else {
          cost[x][y] = s - '0';
        }
        // cin >> grafo[MAXN][MANX];
        cout << cost[x][y] << " ";
        init();
        dijkstra();
      }
      cout << endl;
    }
  }
  return 0;
}


//g++ exercicio1.cpp -o exercicio1 && exercicio1 < input.txt
