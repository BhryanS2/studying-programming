#include "bits/stdc++.h"
using namespace std;

bool e_primo(long long int x)
{
  if (x == 1)
    return 0;
  for (long long int i = 2; i * i <= x; i++)
  { // se o numero for 2 ele nao entra no loop, comportamento desejado
    if (x % i == 0)
    { // se o resto de x por i for 0, entao i divide x
      return 0;
    }
  }
  return 1;
}

int main()
{

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    long long int x;
    cin >> x;
    bool isPrime = e_primo(x);
    if (isPrime) cout << x << " eh primo" << endl;
    else cout << x << " nao eh primo" << endl;
  }

  return 0;
}



//g++ 1165.cpp -o exe; cat input.txt | ./exe
