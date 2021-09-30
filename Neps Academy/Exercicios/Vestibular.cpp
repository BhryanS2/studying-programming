/*
https://neps.academy/br/exercise/160
Vestibular
Fonte: OBI 2008 - Primeira Fase
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int tam, acertos = 0;
  string gab, res;

  cin >> tam;
  cin >> gab >> res;

  for (int i = 0; i < tam; i++)
    if (res[i] == gab[i]) acertos = acertos + 1;


  cout << acertos;
}
