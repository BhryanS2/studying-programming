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
  int bacias;
  while (cin >> bacias && bacias) {
    vector<LLI> v(bacias, 0);
    int i;
    
    for (int i = 0; i < bacias; i++) {
      cin >> v[i];
    }

    LLI rodadas = 0;
    for (int i  = bacias - 1; i > 0; i--) {
      rodadas += v[i];
      for (int j = 0; j < i; j++)
      {
        v[j] += v[i];
      }
      v[i] = 0;
    }
    rodadas += v[0];
    cout << rodadas << endl;
  }

  return 0;
}


//g++ 1647.cpp -o exe;cat input.txt | ./exe
