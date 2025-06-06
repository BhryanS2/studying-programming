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
  double pa, pg, kma,kmg;
  cin >> pa >> pg >> kma >> kmg;
  if (pa == pg) {
    if (kma > kmg) cout << "A" << endl;
    else cout << "G" << endl;
  } else if (kma == kmg) {
    if (pa > pg) cout << "G" << endl;
    else cout << "A" << endl;
  } else {
    if (kma / pa  > kmg / pg) cout << "A" << endl;
    else cout << "G" << endl;
  }

  return 0;
}


//g++ 2295.cpp -o exe; cat input.txt | ./exe
