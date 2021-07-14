/*
plano de internet
https://neps.academy/br/exercise/1480
OBI 2021
Nível Júnior
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

#define MAX 10100

int v[MAX];

int main() {
  int x, n, i, res = 0, temp;
  cin >> x >> n;
  REP(i, n) {
    cin >> temp;
    v[i] = x - temp;
  }

  REP(i, n) {
    res += v[i];
  }

  cout << (res + x)<< endl;

  return 0;
}

//g++ "plano de internet.cpp" -o exe && exe < input.txt
