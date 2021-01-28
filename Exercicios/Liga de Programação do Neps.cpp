/*
https://neps.academy/br/exercise/706
Liga de Programação do Neps
Fonte: Liga de Programação 2020 - Etapa 1
*/
#include<bits/stdc++.h>
int main() {
  int h, cont, cont2;
  scanf("%d", &h);
  cont = (h - 1 - 8);
  if (cont < 0) {
    cont = 24;
    cont2 = (cont + (h - 1 - 8));
    printf("%d", cont2);
  } else printf("%d", cont);

  return 0;
}
