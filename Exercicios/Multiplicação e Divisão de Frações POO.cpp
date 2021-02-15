/*
https://neps.academy/br/exercise/738
Multiplicação e Divisão de Frações
POO
*/
#include <bits/stdc++.h>
using namespace std;

class Fracao {
public:
  int numerador, denominador;

  Fracao() {}

  Fracao(int numerador, int denominador) {
    this->numerador = numerador;
    this->denominador = denominador;
  }

  //multiplicação.
  Fracao operator * (Fracao b) {
    b.numerador *= this->numerador;
    b.denominador *= this->denominador;
    return b;
  }

  //divisão.
  Fracao operator / (Fracao b) {
    b.numerador *= this->denominador;
    b.denominador *= this->numerador;
    return b;
  }


};

int main() {
  Fracao a, b, c;
  char op;

  cin >> a.numerador >> a.denominador;
  cin >> b.numerador >> b.denominador;
  cin >> op;

  if (op == 'M') {
    c = a * b;
  }
  else if (op == 'D') {
    c = b / a;
  }

  printf("%d %d", c.numerador, c.denominador);
}
