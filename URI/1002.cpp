/*
beecrowd | 1002
Área do Círculo
https://www.beecrowd.com.br/judge/pt/problems/view/1002
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

  double raio;
  cin >> raio;

  double area = 3.14159 * raio * raio;

  cout << "A=" << fixed << setprecision(4) << area << endl;

  return 0;
}


//g++ 1002.cpp -o exe && ./exe < input.txt
