/*
https://neps.academy/br/exercise/8
Po que mão
Fonte: OBI 2016 - Segunda Fase
*/
#include<bits/stdc++.h>

int main() {
  int d, p1, p2, p3;
  scanf("%d %d %d %d", &d, &p1, &p2, &p3);

  if (d >= (p1 + p2 + p3)) printf("3");
  else if (d >= p1 || d >= p2 || d >= p3) {
    if (d >= (p1 + p2) || d >= (p1 + p3) || d >= (p2 + p3)) printf("2");
    else printf("1");
  } else printf("0");
  return 0;
}
