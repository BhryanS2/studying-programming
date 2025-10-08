#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void sort(int *arr, int n, int *cont) {
  int swap, x = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap = arr[j];
        arr[j]  = arr[j+1];
        arr[j+1] = swap;
        x++;
      }
    }
  }
  *cont = x;
}


int main() {
  int n;
  scanf("%d", &n);
  while (n--)
  {
    int k;
    scanf("%d", &k);
    int arr[k];
    int arr_cp[k];
    for (int i = 0; i < k; i++)
    {
      int x;
      scanf("%d", &x);
      arr[i] = x;
      arr_cp[i] = x;
    }

    int res = 0;
    sort(arr_cp, k, &res);

    // for (int i = 0; i < k; i++)
    // {
    //   if(arr[i] == arr_cp[i]) res++;
    // }


    printf("Optimal train swapping takes %d swaps.\n", res);

  }

}
