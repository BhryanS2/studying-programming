#include <bits/stdc++.h>
using namespace std;

int matriz[12][12];

int main()
{
  int n, i, j;
  cin >> n;

  while (n--)
  {
    memset(matriz, 0, sizeof matriz);

    for (i = 0; i < 9; i += 2)
      for (j = 0; j <= (i + 1); j += 2)
        cin >> matriz[i][j];

    for (i = 0; i < 8; i += 2)
    {
      for (j = 0; j <= (i + 1); j += 2)
      {
        matriz[i + 2][j + 1] = (matriz[i][j] - matriz[i + 2][j] - matriz[i + 2][j + 2]) / 2;
        matriz[i + 1][j] = matriz[i + 2][j] + matriz[i + 2][j + 1];
        matriz[i + 1][j + 1] = matriz[i + 2][j + 1] + matriz[i + 2][j + 2];
      }
    }

    for (i = 0; i < 9; ++i)
    {
      for (j = 0; j < (i + 1); ++j)
      {
        cout << matriz[i][j];
        if (j != i) cout << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
