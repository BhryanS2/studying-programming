#include<bits/stdc++.h>

int main() {
  int n;
  int v[1000];
  scanf("%d", &n);
  for (int i = 0; i < 1000; i++)
  {
    v[i] = i % n;
  }

  for (int i = 0; i < 1000; i++)
  {
    printf("N[%d] = %d\n",i,v[i]);
  }

  return 0;
}
