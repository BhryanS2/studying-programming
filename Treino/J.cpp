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

int hobbit, humano, elfo, anao, magos;

int main() {
  int n;
  string a;
  char code;
  cin >> n;

  while (n--) {
    cin >> a;
    cin >> code;
    if (code == 'X') hobbit++;
    else if (code == 'A') anao++;
    else if (code == 'E') elfo++;
    else if (code == 'H') humano++;
    else if (code == 'M') magos++;
  }
  cout << hobbit << " Hobbit(s)" << endl;
  cout << humano << " Humano(s)" << endl;
  cout << elfo << " Elfo(s)" << endl;
  cout << anao << " Anao(oes)" << endl;
  cout << magos << " Mago(s)" << endl;
}
//g++ exe.cpp -o exe && exe < input.txt