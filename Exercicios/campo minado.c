/*
Campo Minado
https://neps.academy/br/exercise/241
Fonte: OBI 2011 - Primeira Fase
*/
#include<bits/stdc++.h>

int main() {
  int n;
  int c[51];
  scanf("%d", &n);
  for (int i = 0;i < n;i++) {
    scanf("%d", &c[i]);
  }
  for (int i = 0;i < n;i++) {
    int q = 0;
    q = q + c[i];
    if (i < n - 1) {
      q = q + c[i + 1];
    }
    if (i > 0) {
      q = q + c[i - 1];
    }
    printf("%d\n", q);
  }
}
