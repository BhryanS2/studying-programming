/*
https://neps.academy/br/exercise/890
Piloto Automático
Fonte: OBI 2020 - Primeira Fase - A
*/
#include<bits/stdc++.h>

int main() {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if ((b - a) < (c - b)) printf("1");
  else if ((b - a) > (c - b)) printf("-1");
  else printf("0");

  return 0;
}

