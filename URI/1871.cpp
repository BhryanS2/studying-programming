/**
beecrowd | 1871
Zero vale Zero
 */
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
  int m, n;
  while(cin >> m >> n && m != 0 && n != 0) {
    int soma = n + m;
    char res[100];
    sprintf(res, "%d", soma);
    int len = strlen(res);
    for(int i = 0; i < len; i++) {
      if(res[i] == '0') {
        continue;
      }
      cout << res[i];
    }
    cout << endl;
  }

  return 0;
}


//g++ 1871.cpp -o exe;cat input.txt | ./exe
