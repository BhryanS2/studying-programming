#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m, n, p;
  while (scanf("%d %d %d", &m, &n, &p) && m != 0 && n != 0 && p != 0)
  {
    int matriz[m][n];
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        scanf("%d", &matriz[i][j]);


    for (int i = 0; i < m; i++) {
      for (int j = p; j > 0; j--) {
        // int forca
      }

    }

  }
}
