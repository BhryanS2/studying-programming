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

// tabuada recursiva
int tab(int a, int b) {
  if (b == 11) return 0;
  cout << b << " x " << a << " = " << a * b << endl;
  return tab(a, b + 1);
}

int main() {
  int n;
  cin >> n;
  tab(n, 1);
  return 0;
}


//g++ 1078.cpp -o exe; cat input.txt | ./exe
