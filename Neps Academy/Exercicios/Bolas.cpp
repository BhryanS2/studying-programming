/*
Bolas
Fonte: OBI 2018 - Terceira Fase
https://neps.academy/br/exercise/373
*/
#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define MAX 100

int main() {
  int v[MAX], i;
  bool ok = true;
  memset(v, 0, sizeof(v));
  REP(i, 8) {
    int temp;
    scanf("%d", &temp);
    v[temp]++;
  }
  REP(i, MAX) if(v[i] > 4) ok = false;

  printf("%c", ok ? 'S' : 'N');

  return 0;
}


//g++ Bolas.cpp -o exe && exe < input.txt
