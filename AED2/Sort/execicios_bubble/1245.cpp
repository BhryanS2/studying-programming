/*
Botas Trocadas
https://neps.academy/br/exercise/19
Fonte: OBI 2017 - Primeira Fase
*/
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
  int n, m;
  while (scanf("%d", &n) != EOF)
  {
    int total = 0, vetorD[65], vetorE[65];
    char l;
    for (int i = 30; i <= 60; i++)
    {
      vetorD[i] = 0;
      vetorE[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
      cin >> m >> l;
      if (l == 'E')
        vetorE[m]++;
      else
        vetorD[m]++;
    }

    // pares de botas
    for (int i = 30; i <= 60; i++)
    {
      if (vetorD[i] < vetorE[i])
        total += vetorD[i];
      else
        total += vetorE[i];
    }
    cout << total << endl;
  }
  return 0;
}
