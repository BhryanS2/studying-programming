/*

*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(var, pocz, koniec) for (int var = (pocz); var <= (koniec); ++var)
#define FORD(var, pocz, koniec) for (int var = (pocz); var >= (koniec); --var)
#define PB push_back
#define MP(a, b) make_pair(a, b)
#define F first
#define S second

#define MAX 100000000

int my_binary_search(int *v, int l, int r, int s)
{
  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    if (v[mid] == s)
    {
      return mid;
    }
    if (v[mid] < s)
    {
      l = mid + 1;
    }
    else
    {
      r = mid - 1;
    }
  }

  return -1;
}

int main()
{
  int n, m;
  int casos = 1;
  while (cin >> n >> m && n != 0 && m != 0)
  {
    int indices[n];
    int pesquisas[m];
    for (int i = 0; i < n; i++)
    {
      cin >> indices[i];
    }

    int tamanho = sizeof(indices) / sizeof(indices[0]);
    sort(indices, indices + tamanho);

    for (int i = 0; i < m; i++)
    {
      cin >> pesquisas[i];
    }

    printf("CASE# %d:\n", casos++);
    for (int i = 0; i < m; i++)
    {
      int res = my_binary_search(indices, 0, n, pesquisas[i]);
      if (res != -1) printf("%d found at %d\n", pesquisas[i], res + 1);
      else printf("%d not found\n", pesquisas[i]);
    }
  }

  return 0;
}

// g++ exe.cpp -o exe; cat input.txt | ./exe
