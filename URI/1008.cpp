#include <bits/stdc++.h>

int main() {
  int id, horas;
  double valor;
  scanf("%d %d %lf", &id, &horas, &valor);
  double total = valor * horas;
  printf("NUMBER = %d\n", id);
  printf("SALARY = U$ %.2lf\n", total);
  return 0;
}


// g++ 1008.cpp -o exe; cat input.txt | ./exe
