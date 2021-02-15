/*
https://neps.academy/br/exercise/738
Multiplicação e Divisão de Frações
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  int numerador, denominador;
  char op;

  cin >> a >> b >> c >> d >> op;

  //cout << a << endl << b << endl << c << endl << d;


  if (op == 'M') {
    numerador = c * a;
    denominador = d * b;
  } else if (op == 'D') {
    numerador = a * d;
    denominador = b * c;
  }

  cout << numerador << " " << denominador;

}
