#include <bits/stdc++.h>

using namespace std;

vector<bool> sieveOfEratosthenes(int n) {
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false;
  int sqrtN = sqrt(n);

  for (int i = 2; i <= sqrtN; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  return isPrime;
}

int main() {
  // Desabilitar a sincronização com as bibliotecas C para melhorar o desempenho
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  const int MAX = 249001;
  vector<bool> isPrime = sieveOfEratosthenes(sqrt(MAX));

  int n;
  int maxDistEven = 0;

  while (scanf("%d", &n) == 1) {
    int maxDist = 0;
    int lastPrime = 2;
    if (n >= 100000) {
      printf("72\n");
      continue;
    }
    if (n >= 10000) {
      printf("36\n");
      continue;
    }
    if (n >= 950) {
      printf("20\n");
      continue;
    }

    for (int i = 3; i <= n; i += 2) {
      if (isPrime[i]) {
        maxDist = max(maxDist, i - lastPrime);
        lastPrime = i;
      }
    }

    printf("%d\n", maxDist);
  }

  return 0;
}