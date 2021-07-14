/*
Entrega de Caixas
https://neps.academy/br/exercise/891
Fonte: OBI 2020 - Primeira Fase - A
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
  int caixa1, caixa2, caixa3, resposta;
  cin >> caixa1 >> caixa2 >> caixa3;

  if (caixa1 + caixa2 < caixa3 || (caixa1 < caixa2 && caixa2 < caixa3)) {
    //uma caixa
    resposta = 1;
  } else if (caixa1 < caixa2 || caixa2 < caixa3 || caixa1 < caixa3) {
    //duas caixa
    resposta = 2;
  }  else {
    //três caixas
    resposta = 3;
  }
  cout << resposta << endl;
}

//g++ entrega.cpp -o entrega.exe && entrega.exe < input.txt
