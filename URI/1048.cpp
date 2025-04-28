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
  double s, res, percet;
  cin >> s;

  if (s <= 400) {
    res = s * 1.15;
    percet = 15;
  } else if (s <= 800) {
    res = s * 1.12;
    percet = 12;
  } else if (s <= 1200) {
    res = s * 1.10;
    percet = 10;
  } else if (s <= 2000) {
    res = s * 1.07;
    percet = 7;
  } else {
    res = s * 1.04;
    percet = 4;
  }

    printf("Novo salario: %.2lf\n", res);
    printf("Reajuste ganho: %.2lf\n", s * (percet / 100));
    printf("Em percentual: %.0lf %\n", percet);
  return 0;
}


//g++ 1048.cpp -o exe; cat input.txt | ./exe
