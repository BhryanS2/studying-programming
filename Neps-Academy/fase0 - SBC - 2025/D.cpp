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
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;

  int supersicao = 0;
  int colapsados = 0;


  for (int i = 0; i < n; i++) {
    if (s[i] == '*') {
      supersicao++;
      if (t[i] != '*') {
        colapsados++;
      }
    }
  }

  double taxa = (double)colapsados / supersicao;
  cout << fixed << setprecision(2) << taxa << endl;

  return 0;
}


//g++ D.cpp -o exe;cat input.txt | ./exe
