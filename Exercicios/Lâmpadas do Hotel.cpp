/*
Lâmpadas do Hotel
https://neps.academy/br/exercise/59
Fonte: OBI 2016 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int cont;

int main() {
  int ini_lamp1, ini_lamp2, fim_lamp1, fim_lamp2;
  int aux1, aux2;

  cin >> ini_lamp1 >> ini_lamp2 >> fim_lamp1 >> fim_lamp2;

  if (fim_lamp2 != ini_lamp2) {
    cont++;
    ini_lamp1 = (!ini_lamp1);
  }
  if (ini_lamp1 != fim_lamp1) cont++;

  cout << cont << endl;
}
