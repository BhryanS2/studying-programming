// 8) Fazer uma função DIVS que:
// a. recebe como parâmetro um número inteiro n por valor e dois números inteiros max e
// min por referência;
// b. retorna 0 se o número num é primo e 1 caso contrário. Se o número não for primo, as
// variáveis max e min devem assumir os valores do menor e do maior divisores inteiros do
// número, respectivamente, desconsiderando o número 1 e o próprio número num.

#include <stdio.h>

int divs(int n, int* min, int* max);
int isPrimo(int* n);


int main() {
  int n, min, max;
  printf("Digite um numero inteiro:\n");
  scanf("%d", &n);
  if (divs(n, &min, &max)) {
    printf("O numero %d nao e primo.\n", n);
    printf("O menor divisor eh: %d\n", min);
    printf("O maior divisor eh: %d\n", max);
  }
  else {
    printf("O numero %d e primo.\n", n);
  }

  return 0;
}

int isPrimo(int* x) {
  if (*x == 1)  return 0;
  for (long long int i = 2; i * i <= *x; i++) {
    if (*x % i == 0) return 0;
  }
  return 1;

}
int divs(int n, int* min, int* max) {
  if (isPrimo(&n)) return 0;

  *min = 0;
  *max = 0;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      *min = i;
      *max = n / i;
      break;
    }
  }

  if (*min == 0) return 0;

  return 1;
}