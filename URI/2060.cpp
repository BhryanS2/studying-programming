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

int c2,c3,c4,c5;

int main() {
  int n, i;
  cin >> n;
  REP(i,n) {
    int x;
    cin >> x;
    if (x % 2 == 0) c2++;
    if (x % 3 == 0) c3++;
    if (x % 4 == 0) c4++;
    if (x % 5 == 0) c5++;
  }


  cout << c2 <<" Multiplo(s) de 2" << endl;
  cout << c3 <<" Multiplo(s) de 3" << endl;
  cout << c4 <<" Multiplo(s) de 4" << endl;
  cout << c5 <<" Multiplo(s) de 5" << endl;
  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
