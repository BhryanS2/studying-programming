/*
beecrowd | 2151
Soco do Rulk
https://www.beecrowd.com.br/judge/pt/problems/view/2151
success
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
{
  return x > y ? x : y;
}

void aplicar_soco(int **matriz, int x, int y, int m, int n)
{
  int impacto = 10;
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      int distancia = max(abs(i - (x - 1)), abs(j - (y - 1)));
      int aumento = max(1, impacto - distancia);
      matriz[i][j] += aumento;
    }
  }
}

int main()
{
  int c;
  scanf("%d", &c);
  for (int caso = 1; caso <= c; ++caso)
  {
    int m, n, x, y;
    scanf("%d %d %d %d", &m, &n, &x, &y);
    int **matriz = (int **)calloc(m, sizeof(int *));

    for (size_t i = 0; i < m; i++)
    {
      matriz[i] = (int *)calloc(n, sizeof(int));
    }

    for (int i = 0; i < m; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
        scanf("%d", &matriz[i][j]);
      }
    }

    aplicar_soco(matriz, x, y, m, n);

    printf("parede %d:\n", caso);
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (j > 0) printf(" ");
        printf("%d", matriz[i][j]);
      }
      printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
      free(matriz[i]);
    }
    free(matriz);
  }
  return 0;
}
