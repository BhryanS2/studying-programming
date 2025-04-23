/*
URI Online Judge | 1013
O Maior
https://www.beecrowd.com.br/judge/en/problems/view/1013
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

int maior(int a, int b) {
  if (a > b) return a;
  return b;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  // int maiorAB = (a + b + abs(a - b)) / 2;
  // int maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;
  // int maior = max(a, max(b, c));
  cout << maior(a, maior(b, c)) << " eh o maior" << endl;

  return 0;
}


//g++ 1013.cpp -o exe; cat input.txt | ./exe
