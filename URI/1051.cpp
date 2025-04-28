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
  double s;
  cin >> s;
  if (s <= 2000)  printf("Isento\n");
  else if(s > 2000 && s <= 3000) {
    s = abs(s - 2000);
    s *= 0.08;
    printf("R$ %.2lf\n",s);
  }
  else if(s > 3000 && s <=4500) {
    s = (1000 * 0.08) + ((s - 3000) * 0.18);
    printf("R$ %.2lf\n", s);
  }
  else {
    s = (1000 * 0.08) + (1500 * 0.18) + ((s - 4500) * 0.28);
    printf("R$ %.2lf\n",s);
  }

  return 0;
}


//g++ 1051.cpp -o exe; cat input.txt | ./exe
