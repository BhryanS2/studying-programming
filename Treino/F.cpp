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
  map<int, string> m;
  m[0] = "PROXYCITY";
  m[1] = "P.Y.N.G.";
  m[2] = "DNSUEY!";
  m[3] = "SERVERS";
  m[4] = "HOST!";
  m[5] = "CRIPTONIZE";
  m[6] = "OFFLINE DAY";
  m[7] = "SALT";
  m[8] = "ANSWER!";
  m[9] = "RAR?";
  m[10] = "WIFI ANTENNAS";

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    cout << m[(x + y)] << endl;
  }

  return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
