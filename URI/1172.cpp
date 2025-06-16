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
  int v[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> v[i];
    if (v[i] <= 0) v[i] = 1;
    printf("X[%d] = %d\n", i, v[i]);
  }

  return 0;
}


//g++ 1172.cpp -o exe; cat input.txt | ./exe
