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
  int x;
  char c;
  double m[13][13];
  cin >> x >> c;
  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      cin >> m[i][j];
    }

  }
  double res = 0;
  for (int i = 0; i < 12; i++)
  {
    res += m[x][i];
  }

  if (c == 'S') cout << fixed  << setprecision(1) << res << endl;
  else cout << fixed  << setprecision(1) << (res / 12) << endl;

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
