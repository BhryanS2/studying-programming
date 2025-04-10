#include <bits/stdc++.h>

int qtd(int* res, int qtd) {
  int total = *res / qtd;
  *res = *res % qtd;
  return total;
}

int main() {
  int x;
  scanf("%d", &x);
  int res = x;

  int nota100 = qtd(&res, 100);
  int nota50 = qtd(&res, 50);
  int nota20 = qtd(&res, 20);
  int nota10 = qtd(&res, 10);
  int nota5 = qtd(&res, 5);
  int nota2 = qtd(&res, 2);
  int nota1 = qtd(&res, 1);

  printf("%d\n", x);
  printf("%d nota(s) de R$ 100,00\n", nota100);
  printf("%d nota(s) de R$ 50,00\n", nota50);
  printf("%d nota(s) de R$ 20,00\n", nota20);
  printf("%d nota(s) de R$ 10,00\n", nota10);
  printf("%d nota(s) de R$ 5,00\n", nota5);
  printf("%d nota(s) de R$ 2,00\n", nota2);
  printf("%d nota(s) de R$ 1,00\n", nota1);
  return 0;
}

//  g++ 1018.cpp -o exe; cat input.txt | ./exe
