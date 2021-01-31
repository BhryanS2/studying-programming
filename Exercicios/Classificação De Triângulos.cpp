/*
Classificação de triângulos
https://neps.academy/br/exercise/663
*/
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool condicao(int a, int b, int c) {
  /*
  1 2 1
  | b - c | < a < b + c
  | a - c | < b < a + c
  | a - b | < c < a + b

  a /\ b
   /__\
    c
  */
  int BmenosC = b - c, AmenosC = a - c, AmenosB = a - b;

  BmenosC = BmenosC < 0 ? BmenosC * -1 : BmenosC;
  AmenosC = AmenosC < 0 ? AmenosC * -1 : AmenosC;
  AmenosB = AmenosB < 0 ? AmenosB * -1 : AmenosB;

  if (BmenosC < a && a < b + c) {
    if (AmenosB < c && c < a + b) {
      if (AmenosC < b && b < a + c) return true;
      else return false;
    }
    else return false;
  }
  else return false;
}

int triangulos(int a, int b, int c) {
  /*
  1-Isósceles,
  2-Escaleno
  3-Equilátero
  */
  if (a == b && b == c) return 3;
  else if (a != b && b != c && a != c) return 2;
  else return 1;
}

int main() {
  int a, b, c;

  cin >> a >> b >> c;
  bool veradeiroOuFalso = condicao(a, b, c);

  if (veradeiroOuFalso) cout << "S" << endl << triangulos(a, b, c) << endl;
  else cout << "N" << endl;
}

