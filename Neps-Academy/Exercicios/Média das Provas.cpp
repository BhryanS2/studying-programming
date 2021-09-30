/*
https://neps.academy/br/exercise/731
Média das Provas
Poo
*/
#include <stdio.h>

struct prova {
  int nota, peso;
};

int main() {
  prova A, B, C;
  scanf("%d %d", &A.nota, &A.peso);
  scanf("%d %d", &B.nota, &B.peso);
  scanf("%d %d", &C.nota, &C.peso);

  printf("%d\n", ((A.nota * A.peso) + (B.nota * B.peso) + (C.nota * C.peso)) / (A.peso + B.peso + C.peso));
}

