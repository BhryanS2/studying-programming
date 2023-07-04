/*
beecrowd | 3096
https://www.beecrowd.com.br/judge/pt/problems/view/3096
URI | 3096
*/

#include <iostream>
#include <cmath>
using namespace std;

int countDigitsInFactorial(int n) {
  if (n < 0) return 0;
  if (n <= 1) return 1;

  double x = (n * log10(n / exp(1))) + (log10(2 * M_PI * n) / 2.0);
  return floor(x) + 1;
}

int main() {
  int n;
  cin >> n;

  int digitCount = countDigitsInFactorial(n);
  cout << digitCount << endl;

  return 0;
}
