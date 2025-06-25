#include <bits/stdc++.h>

int main() {
  double x1, y1, x2, y2;
  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
  double diff_X = x2 - x1;
  double diff_Y = y2 - y1;

  double dist = sqrt(pow(diff_Y, 2) + pow(diff_X, 2));
  printf("%.4lf\n", dist);
  return 0;
}

//  g++ 1015.cpp -o exe; cat input.txt | ./exe
