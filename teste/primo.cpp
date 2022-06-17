#include "bits/stdc++.h"
using namespace std;

bool ehPrimo(int n){
    for (int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }

    return true; 
}

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

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        bool isPrime = e_primo(i);
        if (isPrime) cout << i << " ";
    }
    cout << endl;

    return 0;
}