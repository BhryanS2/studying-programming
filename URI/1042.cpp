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
  int a, b, c;
  cin >> a >> b >> c;
  int x = a, y = b, z = c;
  if (x > y) swap(x, y);
  if (y > z) swap(y, z);
  if (x > y) swap(x, y);

  cout << x << endl << y << endl << z << endl << endl << a  << endl << b  << endl << c  << endl;
  return 0;
}


//g++ 1042.cpp -o exe; cat input.txt | ./exe
