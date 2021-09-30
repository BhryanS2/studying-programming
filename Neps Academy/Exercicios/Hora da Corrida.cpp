/*
Hora da Corrida
Fonte: Maratona de Programação da SBC 2019
https://neps.academy/br/exercise/443
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int voltas, placas;
  int total;
  scanf("%d%d", &voltas, &placas);

  total = voltas * placas;

  for (int i = 10; i <= 90; i += 10) {
    if (i != 10)
      cout << " ";
    cout << (int)ceil(total * (i / 100.00));
  }

  return 0;
}


//g++ "Hora da Corrida".cpp -o exe && exe < input.txt
