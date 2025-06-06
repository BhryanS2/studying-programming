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
  int n, i = 0;
  cin >> n;
  REP(i, n) {
    double a, b;
    cin >> a >> b;

    if (a == 0) {
      cout << "0.0" << endl;
      continue;
    }
    
    if (b == 0) {
      cout << "divisao impossivel" << endl;
      continue;
    }

    double res = a / b;
    printf("%.1f\n", res);
  }
  

  return 0;
}


//g++ exe.cpp -o exe;cat input.txt | ./exe
