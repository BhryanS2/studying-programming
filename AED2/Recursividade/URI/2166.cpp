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

double frac(int n) {
  if (n == 0) return 0.0;
  if (n == 1) return 1.0/2.0;
  return 1.0/(2.0 + frac(--n));
}

int main() {
  int n;
  cin >> n;
  cout << setprecision(10) << fixed << 1 + frac(n) << endl;
  return 0;
}


//g++ 2166.cpp -o exe; cat input.txt | ./exe
