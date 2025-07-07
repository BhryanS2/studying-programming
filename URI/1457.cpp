#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    char entrada[20];
    scanf("%s", entrada);

    int n = 0, k = 0;
    
    for (int i = 0; entrada[i]; i++) {
      if (entrada[i] >= '0' && entrada[i] <= '9') {
        n = n * 10 + (entrada[i] - '0');
      }
      else if (entrada[i] == '!') k++;
    }

    ll resultado = 1;
    for (int i = n; i > 0; i -= k) {
      resultado *= i;
    }

    printf("%lld\n", resultado);
  }


  return 0;
}


//g++ 1457.cpp -o exe;cat input.txt | ./exe
