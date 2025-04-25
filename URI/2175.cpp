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

struct competidor
{
  char nome;
  double tempo;

};



int main() {
  competidor a, b, c;
  a.nome = 'o';
  b.nome = 'b';
  c.nome = 'i';
  cin >> a.tempo >> b.tempo >> c.tempo;

  if (a.tempo > b.tempo) swap(a, b);
  if (b.tempo > c.tempo) swap(b, c);
  if (a.tempo > b.tempo) swap(a, b);

  if (a.tempo == b.tempo) {
    cout << "Empate" << endl;
    return 0;
  }

  switch (a.nome)
  {
  case 'i':
    cout << "Ian" << endl;
    break;
  case 'b':
    cout << "Bruno" << endl;
    break;
  case 'o':
    cout << "Otavio" << endl;
    break;
  default:
    break;
  }

  return 0;
}


//g++ 2175.cpp -o exe; cat input.txt | ./exe
