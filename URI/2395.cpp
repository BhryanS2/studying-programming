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

  ULLI a, b, c, x, y, z;
  cin >> a >> b >> c >> x >> y >> z;

  // a, b, c -> largura, comprimento e altura respectivamente
  // x, y, z -> largura, comprimento e altura do cotainer

  ULLI total_altura = z / c;
  ULLI total_comprimento = y / b;
  ULLI total_largura = x / a;

  ULLI quantidade_total = total_altura * total_comprimento * total_largura;

  cout << quantidade_total << endl;

  return 0;
}


//g++ 2395.cpp -o exe;cat input.txt | ./exe
