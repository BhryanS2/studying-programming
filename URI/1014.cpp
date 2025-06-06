#include <bits/stdc++.h>

int main() {
  int km;
  double combustivel;
  scanf("%d %lf", &km, &combustivel);
  double res = km/combustivel;
  printf("%.3lf km/l\n", res);
  return 0;
}

//  g++ 1014.cpp -o exe; cat input.txt | ./exe
