#include <stdlib.h>
#include <stdio.h>

int main() {
  const int max = 2000;
  int *freq = (int*)calloc(max, sizeof(int));
  int n;
  scanf("%d", &n);

  while (n--)
  {
    int x;
    scanf("%d", &x);
    freq[x]++;
  }

  for (int i = 0; i <= max; i++) {
    if (freq[i] > 0) {
      printf("%d aparece %d vez(es)\n", i, freq[i]);
    }
  }
  return 0;
}
