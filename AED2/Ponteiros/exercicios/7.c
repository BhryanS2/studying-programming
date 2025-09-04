// 7) Escreva uma função CALCULA que:
// a. receba como parâmetros duas variáveis inteiras, X e Y;
// b. retorne em X a soma de X e Y;

// c. retorne em Y a subtração de X e Y.
// Pergunta: a passagem dos parâmetros para a função deve ser por valor ou por
// referência?

#include <stdio.h>

void calcula(int* x, int* y) {
  int original_x = *x;
  *x = *x + *y;
  *y = original_x - *y;
}

// a passagem pode deve ser por referência, uma vez que é um requisito retornar em X e Y novos valores ;)

void main() {
  int x = 5, y = 3;
  printf("Antes: X = %d, Y = %d\n", x, y);
  calcula(&x, &y);
  printf("Resultado: X = %d, Y = %d\n", x, y);
}