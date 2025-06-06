#include <bits/stdc++.h>

int main() {
  double vel_carro = 30.0;
  int dist;
  scanf("%d", &dist);
  double t=dist/vel_carro*60;
  printf("%.0lf minutos\n", t);

  return 0;
}

//  g++ 1016.cpp -o exe; cat input.txt | ./exe
