/*
https://neps.academy/br/exercise/268
Soma de Frações
Fonte: OBI 2013 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct fracao {
  ll numerador, denominador;
};

// Função que calcula o máximo divisor comum entre a e b.

long long mdc(ll a, ll b) {
  return (b == 0 ? a : mdc(b, a % b));
}


int main() {
  fracao A, B, C;

  cin >> A.numerador >> A.denominador >> B.numerador >> B.denominador;

  C.numerador = (A.numerador * B.denominador) + (A.denominador * B.numerador);
  C.denominador = A.denominador * B.denominador;

  ll MDC = mdc(C.numerador, C.denominador);

  cout << C.numerador / MDC << " " << C.denominador / MDC;
}
