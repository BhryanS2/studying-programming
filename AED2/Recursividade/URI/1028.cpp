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


int mdc(int a, int b){
  if (b == 0) return a;
  return mdc(b, a % b);
  // return b == 0 ? a : mdc(b, a % b);
}

int main() {
  int n;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    cout << mdc(a, b) << endl;
  }

  return 0;
}


//g++ 1028.cpp -o exe; cat input.txt | ./exe
