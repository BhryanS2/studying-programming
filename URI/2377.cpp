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
  int comprimento, dist_p;
  int custo_km, custo_p;
  cin >> comprimento >> dist_p >> custo_km >> custo_p;

  int total = (comprimento / dist_p) * custo_p + (custo_km * comprimento);
  cout << total << endl;


  return 0;
}


//g++ 2377.cpp -o exe; cat input.txt | ./exe
