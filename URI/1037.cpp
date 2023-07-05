/*
beecrowd | 1037
Intervalo
https://www.beecrowd.com.br/judge/pt/problems/view/1037
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

int main() {
  double n;
  cin >> n;

  if (n >= 0 && n <= 25) {
    cout << "Intervalo [0,25]" << endl;
  } else if (n > 25 && n <= 50) {
    cout << "Intervalo (25,50]" << endl;
  } else if (n > 50 && n <= 75) {
    cout << "Intervalo (50,75]" << endl;
  } else if (n > 75 && n <= 100) {
    cout << "Intervalo (75,100]" << endl;
  } else {
    cout << "Fora de intervalo" << endl;
  }

  return 0;
}


//g++ exe.cpp -o exe && ./exe < input.txt
