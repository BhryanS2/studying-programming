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
  int casos;
  while (cin >> casos && casos) {
    int i, maior_suspeito = -1, segundo_maior = -1;
    int pos_maior_atual = -1, pos_segundo_maior_atual = -1;
    for (i = 0; i < casos; i++) {
      int n;
      cin >> n;
      if (n > maior_suspeito) {
        segundo_maior = maior_suspeito;
        pos_segundo_maior_atual = pos_maior_atual;
        maior_suspeito = n;
        pos_maior_atual = i;
      } else if (n > segundo_maior && n < maior_suspeito) {
        segundo_maior = n;
        pos_segundo_maior_atual = i;
      }
    }

    cout << pos_segundo_maior_atual + 1 << endl;
  }

  return 0;
}


//g++ 1533.cpp -o exe;cat input.txt | ./exe
