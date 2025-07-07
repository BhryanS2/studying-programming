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
  int N, M;
  int notas[] = { 2, 5, 10, 20, 50, 100 };

  while (true) {
    cin >> N >> M;
    if (N == 0 && M == 0) break;

    int troco = M - N;
    bool possivel = false;

    for (int i = 0; i < 6; ++i) {
      for (int j = 0; j < 6; ++j) {
        if (notas[i] + notas[j] == troco) {
          possivel = true;
          break;
        }
      }
      if (possivel) break;
    }

    if (possivel)
      cout << "possible" << endl;
    else
      cout << "impossible" << endl;
  }

  return 0;
}


//g++ exe.cpp -o exe;cat input.txt | ./exe
