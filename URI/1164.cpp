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

bool isPerfect(int n) {
  int s = 0, i;
  for (i = 1; i < n; i++) {
    if (n % i == 0) s+=i;
  }
  return s == n;
}

int main() {
  int n, i;
  cin >> n;
  REP(i, n) {
    int x;
    cin >> x;
    cout << x << (isPerfect(x) ? " eh perfeito" : " nao eh perfeito") << endl;
  }

  return 0;
}


//g++ 1164.cpp -o exe; cat input.txt | ./exe
