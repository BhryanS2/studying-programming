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
  int n, i = 0;
  vector<int> v;
  cin >> n;
  REP(i, n) {
    int n1;
    cin >> n1;
    v.PB(n1);
  }

  for (int j = 0; j < n; ++j) {
    cout << "resposta " << j + 1 << ": " << v[j] << endl;
  }

  return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
