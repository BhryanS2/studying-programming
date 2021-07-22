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

int main() {
  int casos, i, j, dadosTotal, soma = 0;
  cin >> casos;
  REP(i, casos) {
    cin >> dadosTotal;
    soma = 0;
    REP(j, dadosTotal) {
      int faceOposta;
      cin >> faceOposta;
      // se o valor da face oposta  é divisível por n+1;
      if (faceOposta % (dadosTotal + 1) == 0) {
        // face oposta dividido n+1
        soma += faceOposta / (dadosTotal + 1);
      }
      else {
        soma += faceOposta * (dadosTotal + 1 );
      }
    }
    cout << soma << endl;
  }
  return 0;
}


//g++ exercicio2.cpp -o exercicio2 && exercicio2 < input.txt
