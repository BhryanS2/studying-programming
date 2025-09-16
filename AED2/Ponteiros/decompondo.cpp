#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

vector<ull> primeMemory;

bool isPrime(ull n) {
  if (primeMemory[n] != -1) return primeMemory[n];
  if (n == 1) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  for (ull i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) return false;
  }
  primeMemory[n] = true;
  return true;
}

vector<ull> decomposeInPrimes(ull n) {
  vector<ull> primes;
  for (ull i = 2; i <= n; i++) {
    if (isPrime(i)) {
      while (n % i == 0) {
        primes.push_back(i);
        n /= i;
      }
    }
  }
  return primes;
}

int main() {
  ull n;
  while (cin >> n) {
    primeMemory.assign(n + 1, -1);
    vector<ull> primes = decomposeInPrimes(n);
    for (ull i = 0; i < primes.size(); i++) {
      cout << primes[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
