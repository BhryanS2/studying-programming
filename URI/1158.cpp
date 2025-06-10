/*

*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  int n, i;
  cin >> n;
  REP(i, n) {
    ll a, b, pa, an;
    cin >> a >> b;
    if (a % 2 == 0) a++;
    an = a + ((b - 1) * 2);
    pa = (a + an) * b / 2;
    cout << pa << endl;
  }

  return 0;
}


//g++ 1158.cpp -o exe; cat input.txt | ./exe
