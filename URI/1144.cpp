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
  int n, i;
  cin >> n;
  FOR(i, 1, n) {
    cout << i << " " << i*i << " " << i*i*i << " " << endl; 
    cout << i << " " << i*i+1 << " " << i*i*i+1 << " " << endl; 
  }

  return 0;
}


//g++ 1144.cpp -o exe;cat input.txt | ./exe
