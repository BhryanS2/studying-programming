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
  int n;
  while (cin >> n && n != EOF)
  {
    if (n != 0) {
      cout << "vai ter duas!" << endl;
    } else {
      cout << "vai ter copa!" << endl;
    }
  }

  return 0;
}


//g++ 1180.cpp -o exe; ./exe
