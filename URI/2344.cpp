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
  int n;
  cin >> n;
  if (n == 0) cout << "E" << endl;
  else if (n < 36) cout << "D" << endl;
  else if (n < 61) cout << "C" << endl;
  else if (n < 86) cout << "B" << endl;
  else if (n <= 100) cout << "A" << endl;

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
