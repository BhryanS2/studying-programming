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

int main() {
  double vetor[100];
  for (int i = 0; i < 100; i++)
  {
    cin >> vetor[i];
    if (vetor[i] <= 10) printf("A[%d] = %.1lf\n", i, vetor[i]);
  }

  return 0;
}


//g++ 1174.cpp -o exe; cat input.txt | ./exe
