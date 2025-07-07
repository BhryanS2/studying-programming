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
  bitset<5> a;
  bitset<5> b;
  for (int i = 0; i < 5; i++)
  {
    int x;
    cin >> x;
    a[4 - i] = x;
  }

  for (int i = 0; i < 5; i++)
  {
    int x;
    cin >> x;
    b[4 - i] = x;
  }
  if (a == b) {
    cout << "N" << endl;
    return 0;
  }

  if ((a ^ b).all()) {
    cout << "Y" << endl;
  }
  else {
    cout << "N" << endl;
  }

  return 0;
}


//g++ 1743.cpp -o exe;cat input.txt | ./exe
