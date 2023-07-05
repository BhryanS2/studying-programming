/*
beecrowd | 1036
Fórmula de Bhaskara
https://www.beecrowd.com.br/judge/pt/problems/view/1036
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
  double a, b, c;
  cin >> a >> b >> c;

  double delta = b * b - 4 * a * c;
  double r1 = (-b + sqrt(delta)) / (2 * a);
  double r2 = (-b - sqrt(delta)) / (2 * a);

  if (delta < 0 || a == 0) {
    cout << "Impossivel calcular" << endl;
  } else {
    cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
  }

  return 0;
}


//g++ 1036.cpp -o exe && ./exe < input.txt
