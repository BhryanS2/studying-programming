#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool e_primo(long long int x) {
  if (x == 1)  return 0;
  for (long long int i = 2; i * i <= x; i++) { //se o numero for 2 ele nao entra no loop, comportamento desejado
    if (x % i == 0) { //se o resto de x por i for 0, entao i divide x
      return 0;
    }
  }
  return 1;
}


int main() {
  long long int x;

  cin >> x;

  if (e_primo(x)) {
    cout << "S" << "\n";
  }  
else {
    cout << "N" << "\n";
  }
}
