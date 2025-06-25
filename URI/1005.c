#include <stdio.h>

int main() {
  double nota_a, nota_b;
  scanf("%lf %lf", &nota_a, &nota_b);
  double peso_A = 3.5;
  double peso_B = 7.5;
  int soma_dos_pesos = 11;
  double media_ponderada=(nota_a*peso_A+nota_b*peso_B)/soma_dos_pesos;
  printf("MEDIA = %.5lf\n", media_ponderada);
  return 0;
}
