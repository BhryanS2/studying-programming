#include <stdio.h>
#include <stdlib.h>



void sort(int *arr, int n) {
  int swap;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap = arr[j];
        arr[j]  = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
}




int main()
{
  int n;
  while (scanf("%d", &n) != EOF)
  {
    int livros[n];

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &livros[i]);
    }
    // bubble sort
    sort(livros, n);

    for (int i = 0; i < n; i++)
    {
      printf("%04d\n", livros[i]);
    }
  }
  return 0;
}
