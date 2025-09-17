#include<stdio.h>
#include<stdlib.h>
#include<string.h>


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


int main() {
  int n, m;
  while(scanf("%d %d", &n, &m) && n != 0 && m != 0) {
    int a[n];
    int d[m];

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
      scanf("%d", &d[i]);
    }

    sort(a, n);
    sort(d, m);

    int ultimo_d = d[0];
    int penultimo_d= d[1];
    int primeiro_a = a[0];

    if (
        (primeiro_a >= penultimo_d) ||
        (primeiro_a >= ultimo_d && primeiro_a > penultimo_d)
    ) printf("N\n");
    else printf("Y\n");
  }

}
