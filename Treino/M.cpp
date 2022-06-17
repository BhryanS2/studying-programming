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
  int huguinho, zezinho, luisinho;
  cin >> huguinho >> zezinho >> luisinho;
  int v[3] = { huguinho, zezinho, luisinho };
  sort(v, v + 3);
  int meio = v[1];
  if (meio == huguinho) {
    cout << "huguinho" << endl;
  }
  else if (meio == zezinho) {
    cout << "zezinho" << endl;
  }
  else {
    cout << "luisinho" << endl;
  }


  return 0;
}


//g++ exe.cpp -o exe && exe < input.txt
