/*
https://neps.academy/br/exercise/225
Overflow
Fonte: OBI 2009 - Primeira Fase
*/
#include<bits/stdc++.h>
int main() {
  int n, num1, num2, resultado;
  char sinal[3];

  scanf("%d", &n);

  scanf("%d", &num1);

  scanf("%c", &sinal[0]);

  scanf("%d", &num2);

  if (sinal[0] == '+') {
    resultado = num1 + num2;
    if (resultado > n) printf("OVERFLOW");
    else printf("OK");
  }
  else if (sinal[0] == '*') {
    resultado = num1 * num2;
    if (resultado > n) printf("OVERFLOW");
    else printf("OK");

  }

  return 0;
}
