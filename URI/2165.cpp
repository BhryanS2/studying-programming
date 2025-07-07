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
  string s;
  getline(cin, s);
  int n = s.size();
  if (n > 140) {
    cout << "MUTE" << endl;
  } else {
    cout << "TWEET" << endl;
  }

  return 0;
}


//g++ exe.cpp -o exe;cat input.txt | ./exe
