#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
  ll dp[60 + 1];
  dp[0] = 0;
  dp[1] = 1;
  for (int i = 2; i <= 60; i++)
  {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    printf("Fib(%d) = %lld\n", x, dp[x]);
  }

  return 0;
}

// g++ 1176.cpp -o exe; cat input.txt | ./exe
