/*
https://neps.academy/br/exercise/385
triângulo OBI 2014 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

bool ehtriangulo(int a, int b, int c, int d) {

  if (a < (b + c) && c < (a + b) && b < (a + c)) return true;
  else if (a < (b + d) && d < (a + b) && b < (a + d)) return true;
  else if (a < (d + c) && c < (a + d) && d < (a + c)) return true;
  else if (d < (b + c) && c < (d + b) && b < (d + c)) return true;
  else return false;

}

int a, b, c, d;

int main() {
  cin >> a >> b >> c >> d;

  cout << (ehtriangulo(a, b, c, d) ? 'S' : 'N') << endl;
}
