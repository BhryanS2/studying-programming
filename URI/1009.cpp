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
  string s;
  double a, b;
  cin >> s >> a >> b;
  cout << "TOTAL = R$ ";
  cout << fixed << setprecision(2) << a + (b * 0.15) << endl;
  return 0;
}


//g++ 1009.cpp -o exe; cat input.txt | ./exe
