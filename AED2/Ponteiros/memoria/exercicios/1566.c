#include <stdio.h>
#include <stdlib.h>

int main()
{
  int first;
  int NC, N, altura;

  scanf("%d", &NC);

  for (int k = 0; k < NC; ++k)
  {
    scanf("%d", &N);

    int *alturas = (int*)calloc(231, sizeof(int));

    for (int i = 0; i < N; ++i)
    {
      scanf("%d", &altura);
      alturas[altura]++;
    }

    first = 1;
    for (int i = 20; i < 231; ++i)
    {
      for (int j = 0; j < alturas[i]; ++j)
      {
        if (first)
          first = 0;
        else
          printf(" ");

        printf("%d", i);
      }
    }
    printf("\n");
  }

  return 0;
}
