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
  char s[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << s[i];
  }
  cout << endl;

  return 0;
}


//g++ exe.cpp -o exe;cat input.txt | ./exe
