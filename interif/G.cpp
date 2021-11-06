/*
interif
2021
Problem G
resolvido
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
  string s;
  cin >> s;
  int n = s.size(), i;
  int soma_pares = 0, soma_impares = 0;
  REP(i, n) {
    int num = s[i] - '0';
    if (num % 2 != 0) {
      soma_impares += num;
    }
    else {
      soma_pares += num;
    }
  }

  bool algarismos = soma_pares % 3 == 0;
  bool impares = soma_impares % 3 == 0;

  cout << (algarismos ? "S" : "N") << endl;
  cout << (impares ? "S" : "N") << endl;

  return 0;
}

/*
g++ G.cpp -o exe && ./exe < input.txt
*/
