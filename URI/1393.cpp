/*
beecrowd | 1393
Lajotas Hexagonais
Timelimit: 1
https://judge.beecrowd.com/pt/problems/view/1393
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000


int main() {

  ll fib[60 + 1];
  fib[0] = 1;
  fib[1] = 1;
  for (int i = 2; i <= 60; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
  }

  int n;
  while (cin >> n && n)
  {
    cout << fib[n] << endl;
  }

  return 0;
}


//g++ 1393.cpp -o exe; cat input.txt | ./exe
