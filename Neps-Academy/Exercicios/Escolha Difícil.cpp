/*
Escolha Difícil
https://neps.academy/br/exercise/103
Fonte: Maratona de Programação da SBC 2017
*/
#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for (int i=0; i<(n); ++i)

int main() {
  int TotalAlim[5];
  int QtdDesejada[5], i, res = 0;
  REP(i, 3) scanf("%d", TotalAlim + i);
  REP(i, 3) scanf("%d", QtdDesejada + i);

  REP(i, 3) if(TotalAlim[i] < QtdDesejada[i]) res += TotalAlim[i] - QtdDesejada[i];

  printf("%d\n", abs(res));
  return 0;
}


//g++ "escolha difícil".cpp -o exe && exe < input.txt
