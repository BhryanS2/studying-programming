/*
multplicação usando recursividade
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

int mult(int a, int b) {
  if (b == 0) return 0;
  return a + mult(a, b - 1);
}

int main() {
  cout << mult(5,500000) << endl;
  return 0;
}


//g++ -O0 exe.cpp -o exe; cat input.txt | ./exe
