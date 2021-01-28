/*
https://neps.academy/br/exercise/263
Critérios de Divisibilidade 2

*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string n;
  cin >> n;
  int number;

  if ((int)n.size() >= 2) {
    string lastTwo = "";
    lastTwo += n[(int)n.size() - 2];
    lastTwo += n[(int)n.size() - 1];

    number = stoi(lastTwo);

  } else number = stoi(n);


  // divisibilidade por 4: final igual a 00 ou os ultimos dois algarismos e divisivel por 4
  if (number == 0 || (number % 4 == 0)) cout << "S\n";
  else cout << "N\n";


  long long int sum = 0;
  for (int i = 0; i < (int)n.size(); i++) sum += (n[i] - '0');


  // divisibilidade por 5: o ultimo algarismos é 0 ou 5
  if (sum % 9 == 0) cout << "S\n";
  else cout << "N\n";

  // divisibilidade por 25: final 0, 25, 50 ou 75
  if (number == 0 || number == 25 || number == 50 || number == 75) cout << "S\n";
  else cout << "N\n";

  return 0;
}
