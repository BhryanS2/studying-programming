/*
https://neps.academy/br/exercise/324
Garçom
Fonte: OBI 2010 - Primeira Fase
*/
#include<bits/stdc++.h>
int main() {
  int linhas, i, latas, copos, cont, maior;
  scanf("%d", &linhas);
  i = 1;
  cont = 0;
  while (i <= linhas) {
    i++;
    scanf("%d %d", &latas, &copos);
    if (latas > copos) {
      cont += copos;
    }

  }
  printf("%d \n", cont);
  return 0;
}
