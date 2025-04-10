#include <stdio.h>

int main() {
  int raio;
  scanf("%d", &raio);
  const double pi = 3.14159;
  double volume = 4/3*pi*(raio*raio*raio);
  printf("VOLUME = %lf", volume);
  // %d %i %lf %f %x %c
  return 0;
}

//  g++ 1011.cpp -o exe; cat input.txt | ./exe
