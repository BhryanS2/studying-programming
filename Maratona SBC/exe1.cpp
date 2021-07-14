#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define f first
#define s second
#define MAXN 111100
typedef long long ll;

int t[MAXN];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)  cin >> t[i];

  sort(t, t + n);
  int res = n;

  for (int i = 0; i < n; i++) res = min(res, t[i] + (n - i - 1));

  cout << res << endl;
  return 0;
}


//g++ exe1.cpp -o exe1.exe && exe1.exe < input.txt
