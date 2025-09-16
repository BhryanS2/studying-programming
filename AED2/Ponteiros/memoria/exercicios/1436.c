#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, count = 0;
  scanf("%d", &n);
  while(n--) {
    count++;
    int x;
    scanf("%d", &x);
    int *v = (int*)calloc(x+1,sizeof(int));
    for (int i = 0; i < x; i++)
    {
      scanf("%d", &v[i]);
    }

    int mid = x / 2;
    if (x % 2 == 0) {
      printf("Case %d: %d\n", count, v[mid - 1]);
    } else {
      printf("Case %d: %d\n", count, v[mid]);
    }
  }

  return 0;
}


//g++ 1436.cpp -o exe;cat input.txt | ./exe
