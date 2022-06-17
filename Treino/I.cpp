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
  int t, a, b, c;
  cin >> t;

  cout << fixed << setprecision(2);
  while (t--) {
    cin >> a >> b >> c;

    double delta = pow(b, 2) - 4 * a * c;
    double maxY = -(double(delta) / double(4 * a));

    cout << maxY << endl;
  }


  return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
