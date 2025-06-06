/*
beecrowd | 1020
Notas e Moedas
https://www.beecrowd.com.br/judge/pt/problems/view/1020
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
  int n;
  cin >> n;
  int ano = n / 365;
  n = n % 365;
  int meses = n / 30;
  n = n % 30;
  printf("%d ano(s)\n", ano);
  printf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", n);
  return 0;
}


//g++ 1020.cpp -o exe; cat input.txt | ./exe
