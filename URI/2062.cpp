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
  string s[n];
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  for (int i = 0; i < n; i++)
  {
    string palavra = s[i];
    if(palavra.size() != 3) {
      cout << palavra;
      if (i + 1 < n) cout << " ";
      continue;
    }
    if(
      (palavra[0] == 'O' && palavra[1] == 'B') ||
      (palavra[0] == 'U' && palavra[1] == 'R')
    ) {
      palavra[2] = 'I';
    }
    cout << palavra;
      if (i + 1 < n) cout << " ";
  }
  cout << endl;
  return 0;
}


//g++ 2062.cpp -o exe; cat input.txt | ./exe
