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

#define MAX 2001

int main() {
  int n, x;
  int freq[2001] = { 0 };

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    freq[x]++;
  }

  for (int i = 0; i <= 2000; i++) {
    if (freq[i] > 0) {
      printf("%d aparece %d vez(es)\n", i, freq[i]);
    }
  }

  return 0;
}


//g++ 1171.cpp -o exe;cat input.txt | ./exe
