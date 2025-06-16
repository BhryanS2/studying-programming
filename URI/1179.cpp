#include <bits/stdc++.h>
using namespace std;

int count_par = 0, count_impar = 0;
int v_par[5], v_impar[5];

void print_par() {
  for (int i = 0; i < count_par; i++)
  {
    printf("par[%d] = %d\n", i, v_par[i]);
  }
  count_par = 0;
  memset(v_par, 0, sizeof(v_par));
}

void print_impar() {
  for (int i = 0; i < count_impar; i++)
  {
    printf("impar[%d] = %d\n", i, v_impar[i]);
  }
  count_impar = 0;
  memset(v_impar, 0, sizeof(v_impar));
}

int main() {
  int n = 15;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    if (count_par == 5) print_par();
    if (count_impar == 5) print_impar();

    if (x % 2 == 0) {
      v_par[count_par] = x;
      count_par++;
    } else {
      v_impar[count_impar] = x;
      count_impar++;
    }
  }

  print_impar();
  print_par();

  return 0;
}


//g++ 1179.cpp -o exe; cat input.txt | ./exe
