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
  int v[20];
  for (int i = 0; i < 20; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < 10; i++)
  {
    // printf("Valor autal V[%d] = %d\n", i, v[i]);
    // printf("Valor troca V[%d] = %d\n", 19-i, v[19-i]);
    // int temporario = v[19 - i];
    // v[19 - i] = v[i];
    // v[i] = temporario;
    swap(v[19 - i], v[i]);
  }

  for (int i = 0; i < 20; i++)
  {
    printf("N[%d] = %d\n", i, v[i]);
  }


  return 0;
}


//g++ 1175.cpp -o exe; cat input.txt | ./exe
