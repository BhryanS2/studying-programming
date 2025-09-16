#include<stdio.h>
// 1) Fazer uma função FATORES que:
// a. Recebe 3 parâmetros: um vetor de inteiros, um número inteiro n passado por valor e
// outro número x passado como ponteiro.
// b. Retorna um número inteiro.
// c. Decompõe o número n em fatores primos e armazena-os nas posições do vetor. O
// conteúdo de x deve receber o número de fatores primos encontrados. Caso o número de
// fatores encontrados seja maior que 10, a função deve retornar 1, do contrário deve
// retornar 0.

int fatores(int v[], int n, int *x) {
  int count = 0;
  for (int i = 2; i <= n; i++) {
    while (n % i == 0) {
      if (count < 10) {
        v[count] = i;
      }
      count++;
      n /= i;
    }
  }
  *x = count;
  if (count > 10) {
    return 1;
  }
  return 0;
}

int v[11];

void main() {
  int n = 8767;
  int total = 0;
  if (fatores(v, n, &total)) printf("Seu numero %d tem mais de 10 divisores, tendo %d\n", n, total);
  else printf("Seu numero %d tem menos de 10 divisores, tendo %d\n", n, total);

  for (int i = 0; i < (total > 10 ? 10 : total); i++)
  {
    printf("%d ", *(v + i));
  }
}
