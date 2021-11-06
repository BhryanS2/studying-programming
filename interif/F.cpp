/*
interif
2021
Problem F
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
  double gasolina, etanol;
  cin >> gasolina >> etanol;
  // etanol ser mais vantajoso ele deve custar menos que 70% do valor da gasolina
  double custo = gasolina * 0.7;
  if (etanol < custo) {
    cout << "ETANOL" << endl;
  }
  else {
    cout << "GASOLINA" << endl;
  }
  return 0;
}

/*
g++ F.cpp -o exe && ./exe < input.txt
*/