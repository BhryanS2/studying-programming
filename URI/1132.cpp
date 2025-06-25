#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  int a, b, s = 0, i;
  cin >> a >> b;
  if (a > b) swap(a, b);
  FOR(i, a, b) {
    if (i % 13 != 0) s += i;
  }

  cout << s << endl;
  

  return 0;
}


//g++ 1132.cpp -o exe;cat input.txt | ./exe
