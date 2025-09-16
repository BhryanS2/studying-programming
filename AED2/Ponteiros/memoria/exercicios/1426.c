#include <stdlib.h>
#include <stdio.h>

int main()
{
  int n, i, j;
  scanf("%d", &n);
  // int matriz[12][12];
  int **matriz = (int**)calloc(12, sizeof(int*));
  for (size_t i = 0; i < 12; i++)
  {
    matriz[i] = (int*)calloc(12, sizeof(int));
  }


  while (n--)
  {

    for (i = 0; i < 9; i += 2)
      for (j = 0; j <= (i + 1); j += 2) scanf("%d", &matriz[i][j]);

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
        printf("%d", matriz[i][j]);
        if (j != i) printf(" ");
      }
      printf("\n");
    }
  }

  return 0;
}
