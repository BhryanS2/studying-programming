#include <bits/stdc++.h>

int main() {
  int raio;
  scanf("%d", &raio);
  const double pi = 3.14159;
  double volume = (4.0/3.0)*pi*pow(raio, 3);
  printf("VOLUME = %.3lf\n", volume);
  // %d %i %lf %f %x %c
  return 0;
}

//  g++ 1011.cpp -o exe; cat input.txt | ./exe
