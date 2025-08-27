/*

*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef unsigned long long ll;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

ll mult(ll a, ll b) {
  if (b == 0) return 0;
  return a + mult(a, --b);
}

int main() {
  ll a, b;
  cin >> a >> b;
  cout << mult(a, b) << endl;
  return 0;
}


//g++ 1959.cpp -o exe; cat input.txt | ./exe
