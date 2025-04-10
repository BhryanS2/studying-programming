#include <stdio.h>

int main() {
  double nota_a, nota_b, nota_c;
  scanf("%lf %lf %lf", &nota_a, &nota_b, &nota_c);
  double peso_A = 2;
  double peso_B = 3;
  double peso_C = 5;
  int soma_dos_pesos = 10;
  double media_ponderada=(nota_a*peso_A+nota_b*peso_B+nota_c*peso_C)/soma_dos_pesos;
  printf("MEDIA = %.1lf\n", media_ponderada);
  return 0;
}
