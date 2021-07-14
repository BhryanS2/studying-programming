/*
https://neps.academy/br/exercise/1481
OBI 2021
Torneio de Tênis
Nível Júnior
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

#define MAX 6

int cont;

int Group() {
  if(cont == 5 || cont == 6) return 1;
  else if(cont == 3 || cont == 4) return 2;
  else if(cont == 1 || cont == 2) return 3;
  else return -1;
}

int main() {
  int i;
  char s;
  REP(i, MAX) {
    cin >> s;
    if(s == 'V')cont++;
  }
  cout << Group() << endl;
  return 0;
}


//g++ "Torneio de Tênis".cpp -o exe && exe < input.txt
