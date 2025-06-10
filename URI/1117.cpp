#include <bits/stdc++.h>
using namespace std;
int main() {
  double media = 0.0, soma = 0, n;
  int count = 0;

  while(cin >> n) {
    if(n < 0 || n > 10) {
      cout << "nota invalida" << endl;
      continue;
    }
    count++;
    soma += n;
    if (count >= 2) break;
  }
  media = soma / 2;
  cout << fixed << setprecision(2) << "media = " << media << endl;
}
