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
  double n;
  cin >> n;
  printf("N[0] = %.4lf\n", n);
  for (int i = 1; i < 100; i++)
  {
    n = n / 2;
    printf("N[%i] = %.4lf\n", i, n);
  }

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
