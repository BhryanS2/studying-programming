#include <bits/stdc++.h>

int qtd(int *res, int qtd) {
  int total  = *res / qtd;
  *res = *res % qtd;
  return total;
}

int main() {
  double x;
  scanf("%lf", &x);
  int res = x * 100;

  int nota100 = qtd(&res, 100*100);
  int nota50 = qtd(&res, 50*100);
  int nota20 =  qtd(&res, 20*100);
  int nota10 = qtd(&res, 10*100);
  int nota5 = qtd(&res, 5*100);
  int nota2 = qtd(&res, 2*100);

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", nota100);
  printf("%d nota(s) de R$ 50.00\n", nota50);
  printf("%d nota(s) de R$ 20.00\n", nota20);
  printf("%d nota(s) de R$ 10.00\n", nota10);
  printf("%d nota(s) de R$ 5.00\n", nota5);
  printf("%d nota(s) de R$ 2.00\n", nota2);
  printf("MOEDAS:\n");

  int moeda100 = qtd(&res, 100);
  int moeda50 = qtd(&res, 50);
  int moeda25 = qtd(&res, 25);
  int moeda10 = qtd(&res, 10);
  int moeda5 = qtd(&res, 5);
  int moeda1 = qtd(&res, 1);

  printf("%d moeda(s) de R$ 1.00\n", moeda100);
  printf("%d moeda(s) de R$ 0.50\n", moeda50);
  printf("%d moeda(s) de R$ 0.25\n", moeda25);
  printf("%d moeda(s) de R$ 0.10\n", moeda10);
  printf("%d moeda(s) de R$ 0.05\n", moeda5);
  printf("%d moeda(s) de R$ 0.01\n", moeda1);
  return 0;
}

//  g++ 1021.cpp -o exe; cat input.txt | ./exe
