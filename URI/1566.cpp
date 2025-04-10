/*
beecrowd | 1115
Quadrante
https://www.beecrowd.com.br/judge/pt/problems/view/1115
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
  // 1, 3, 5, 10, 25, 50 e 100.

  int n;
  cin >> n;

  if(n == 1) cout << "Top 1" << endl;
  else if (n <= 3) cout << "Top 3" << endl;
  else if (n <= 5) cout << "Top 5" << endl;
  else if (n <= 10) cout << "Top 10" << endl;
  else if (n <= 25) cout << "Top 25" << endl;
  else if (n <= 50) cout << "Top 50" << endl;
  else if (n <= 100) cout << "Top 100" << endl;

  return 0;
}


//g++ 1180.cpp -o exe; ./exe
