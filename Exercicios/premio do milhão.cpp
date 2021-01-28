/*
https://neps.academy/br/exercise/48
Prêmio do Milhão
Fonte: OBI 2015 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int Dias, AcessoPorDia, Milhao = 0, DiasParaMilhao = 0;

  cin >> Dias;

  for (int i = 0; i < Dias; i++) {
    cin >> AcessoPorDia;
    if (Milhao < 1000000) {
      Milhao += AcessoPorDia;
      DiasParaMilhao++;
    }
  }

  cout << DiasParaMilhao;

}
