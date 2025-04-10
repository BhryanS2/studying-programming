#include <bits/stdc++.h>

int main() {
  int raio;
  // a) a área do triângulo retângulo que tem A por base e C por altura.
  // b) a área do círculo de raio C. (pi = 3.14159)
  // c) a área do trapézio que tem A e B por bases e C por altura.
  // d) a área do quadrado que tem lado B.
  // e) a área do retângulo que tem lados A e B.
  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);
  const double pi = 3.14159;
  double triangulo, circulo, trapezio, quadrado, retangulo;
  triangulo=(1.0/2.0)*a*c;
  circulo=pi*pow(c, 2);
  trapezio=(a+b)*c/2;
  quadrado=b*b;
  retangulo=a*b;

  printf("TRIANGULO: %.3lf\n", triangulo);
  printf("CIRCULO: %.3lf\n", circulo);
  printf("TRAPEZIO: %.3lf\n", trapezio);
  printf("QUADRADO: %.3lf\n", quadrado);
  printf("RETANGULO: %.3lf\n", retangulo);
  return 0;
}

//  g++ 1012.cpp -o exe; cat input.txt | ./exe
