/*
https://neps.academy/br/exercise/725
Soma de Frações com Structs
*/
#include <bits/stdc++.h>
using namespace std;

struct fracao {
  int numerador, denominador;
};

// Função que calcula o máximo divisor comum entre a e b.
int mdc(int a, int b) {
  return (b == 0 ? a : mdc(b, a % b));
}

int main() {
  fracao A, B, C;

  cin >> A.numerador >> A.denominador >> B.numerador >> B.denominador;

  C.numerador = (A.numerador * B.denominador) + (A.denominador * B.numerador);
  C.denominador = A.denominador * B.denominador;

  int MDC = mdc(C.numerador, C.denominador);

  cout << C.numerador / MDC << " " << C.denominador / MDC;
}
