/*

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

#define MAX 100000000

int main() {
  int inicio, fim;
  cin >> inicio >> fim;

  if (inicio == fim) cout << "O JOGO DUROU 24 HORA(S)" << endl;
  else if (inicio > fim) {
    cout << "O JOGO DUROU " << (24 - inicio) + fim << " HORA(S)" << endl;
  } else {
    cout << "O JOGO DUROU " << fim - inicio << " HORA(S)" << endl;
  }

  return 0;
}


//g++ 1046.cpp -o exe; cat input.txt | ./exe
