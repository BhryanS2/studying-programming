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
  int n, count = 0;
  cin >> n;
  while(n--) {
    count++;
    int x;
    cin >> x;
    vector<int> v;
    REP(i, x) {
      int a;
      cin >> a;
      v.PB(a);
    }
    int mid = x / 2;
    if (x % 2 == 0) {
      cout << "Case " << count << ": " << v[mid - 1] << endl;
    } else {
      cout << "Case " << count << ": " << v[mid] << endl;
    }
  }

  return 0;
}


//g++ 1436.cpp -o exe;cat input.txt | ./exe
