#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
  cin >> N;
  int ano, mes, dia;
  ano = N / 365;
  N = N % 365;
  mes = N / 30;
  N = N % 30;
  dia = N;
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
}
