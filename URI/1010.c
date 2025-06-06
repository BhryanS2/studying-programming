#include <stdio.h>

int main() {
  int codigo1, numero_de_pecas1;
  int codigo2, numero_de_pecas2;
  double valor_un_1, valor_un_2;
  scanf("%d %d %lf", &codigo1, &numero_de_pecas1, &valor_un_1);
  scanf("%d %d %lf", &codigo2, &numero_de_pecas2, &valor_un_2);
  double valor_total_1 = numero_de_pecas1*valor_un_1;
  double valor_total_2 = numero_de_pecas2*valor_un_2;
  double total = valor_total_1+valor_total_2;
  printf("VALOR A PAGAR: R$ %.2lf\n", total);
  return 0;
}
