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

int fatorial(int n) {
  if (n == 0) return 1;
  return (n * fatorial(n - 1));
}

int fib(int n) {
  if (n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  cout << fatorial(4) << endl;
  cout << fib(4) << endl;
  return 0;
}


//g++ exe.cpp -o exe; cat input.txt | ./exe
