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
  int n, i;
  cin >> n;
  if (n == 0) return 0;
  REP(i, n - 1) {
    cout << "Ho ";
  }
  cout << "Ho!" << endl;


  return 0;
}


//g++ 1759.cpp -o exe; cat input.txt | ./exe
