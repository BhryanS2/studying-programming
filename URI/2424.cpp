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
  int x, y;
  cin >> x>> y;
  if (x > 432 || y > 468 || x < 0 || y < 0) cout << "fora" << endl;
  else cout << "dentro" << endl;

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
