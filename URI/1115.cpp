/*
beecrowd | 1115
Quadrante
https://www.beecrowd.com.br/judge/pt/problems/view/1115
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
  int x =0;
  int y = 0;
  while (cin >> x >> y && x && y )
  {
    if (x > 0 && y > 0) cout << "primeiro" << endl;
    else if (x < 0 && y > 0) cout << "segundo" << endl;
    else if (x < 0 && y < 0) cout << "terceiro" << endl;
    else if (x > 0 && y < 0) cout << "quarto" << endl;
    // else cout << "eixos" << endl;
  }

  return 0;
}


//g++ 1115.cpp -o exe; ./exe
