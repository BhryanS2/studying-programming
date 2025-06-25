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
#define LL unsigned long long
#define MAX 100000000

int main() {
  int a, b, c;
  cin >> c >> b >> a;
  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b);

  // cout << a << b << c << endl;
  if (a == b && b == c) {
    cout << "a" << endl;
    return 0;
  }

  bool eTriangulo = c >= a + b;

  if (eTriangulo) {
    cout << "n" << endl;
    return 0;
  }

  LL int a2 = pow(a, 2);
  LL int b2 = pow(b, 2);
  LL int c2 = pow(c, 2);

  bool eRetangulo = c2 == b2 + a2;

  if (eRetangulo) {
    cout << "r" << endl;
    return 0;
  }

  bool eAcutangulo = c2 < b2 + a2;
  if (eAcutangulo) {
    cout << "a" << endl;
    return 0;
  }
  bool eObtusanglo = c2 > b2 + a2;
  if (eObtusanglo) {
    cout << "o" << endl;
    return 0;
  }





  return 0;
}


//g++ 2397.cpp -o exe; cat input.txt | ./exe
