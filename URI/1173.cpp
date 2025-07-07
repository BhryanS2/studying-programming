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
  cin >> v[0];
  for (int i = 1; i < 10; i++)
  {
    v[i] = v[i-1] * 2;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("N[%d] = %d\n",i, v[i]);
  }
  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
