/*
beecrowd | 2057
Soma Simples
https://www.beecrowd.com.br/judge/pt/problems/view/2057
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
 	unsigned int saida, voo;
  int fuso;

  scanf("%d %d %d", &saida, &voo, &fuso);

  if (saida == 0) {
    saida = 24;
  }

  saida = ((saida + voo + fuso) % 24);

  printf("%d\n",saida);

  return 0;
}


//g++ 2057.cpp -o exe;cat input.txt | ./exe
