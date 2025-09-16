// 5) Fazer uma função com as seguintes características:
// a. recebe dois números inteiros do usuário.
// b. retorna 1 se os números são iguais, 0 se são diferentes e –1 se a soma ou o produto
// estoura a faixa dos inteiros. Além disso, retorna a soma e o produto dos dois números.
// c. Fazer um programa para receber dois números do usuário, chamar a função e mostrar
// se os números são iguais. Além disso, mostrar sua soma e seu produto.

#include <stdio.h>

int compare_numbers(int a, int b, int* sum, int* product) {
  *sum = a + b;
  *product = a * b;

  if (*sum <= -2147483648  || *product <= -2147483648) {
    // um inteiro tem limite de 32 bits, então se a soma ou o produto
    // ultrapassar esse limite, retornamos -1
    // exemplo: 2147483647 + 1 = -2147483648 (overflow)

    // se usar um short int, o limite é menor, então
    // é importante verificar se a soma ou o produto estouram o limite
    // de um inteiro, que é 2147483647 para int e 32767
    // para short int.
    return -1;
  }
  if (a == b) {
    return 1;
  }
  return 0;
}

void main() {
  int a, b, sum, product, result;
  printf("Digite dois numeros inteiros: (numeros maiores que 0)\n");
  scanf("%d %d", &a, &b);

  result = compare_numbers(a, b, &sum, &product);

  if (result == 1) {
    printf("Os numeros sao iguais.\n");
  }
  else if (result == 0) {
    printf("Os numeros sao diferentes.\n");
  }
  else {
    printf("Overflow detectado.\n");
  }

  printf("Soma: %d\n", sum);
  printf("Produto: %d\n", product);
  printf("Resultado da comparacao: %d\n", result);
}
