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

  map <char, int> runas;
  int n, m, x, ans = 0, k;
  char aux;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> aux >> x;
    runas.insert({ aux, x });
  }
  cin >> k;
  for (int i = 0; i < k; i++) {
    cin >> aux;
    ans += runas[aux];
  }
  cout << ans << endl;
  ans >= m ? cout << "You shall pass!" << endl : cout << "My precioooous" << endl;

  return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
