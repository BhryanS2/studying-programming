#include <bits/stdc++.h>

using namespace std;

vector<int> sieveOfEratosthenes(int n) {
  vector<bool> isPrime(n + 1, true);
  vector<int> primes;
  int sqrtN = sqrt(n);

  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i <= sqrtN; i += 1 + (i & 1)) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for (int i = 2; i <= n; ++i) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }

  return primes;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  const int MAX = 1000000000;
  vector<int> primes = sieveOfEratosthenes(sqrt(MAX));

  int n;
  while (cin >> n) {
    int maxDist = 0;
    int lastPrime = 2;

    for (int prime : primes) {
      if (prime > n) break;
      int dist = prime - lastPrime;
      if (dist > maxDist)
        maxDist = dist;
      lastPrime = prime;
    }

    cout << maxDist << endl;
  }

  return 0;
}
