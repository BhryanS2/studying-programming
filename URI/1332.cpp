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
  for (int i = 0; i < n; i++)
  {
    char s[20];
    scanf("%s", s);
    int size = strlen(s);
    if (size == 5) cout << 3 << endl;
    else if (
      (s[0] == 't' && s[1] == 'w') ||
      (s[0] == 't' && s[2] == 'o') ||
      (s[1] == 'w' && s[2] == 'o')
    ) cout << 2 << endl;
    else cout << 1 << endl;
  }

  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
