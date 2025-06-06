#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int total = 2 * n - 1;

  const int silabas = 18;

  vector<int> participantes(total);
  for (int i = 0; i < total; i++) {
    participantes[i] = i;
  }

  int index = 0;
  while (participantes.size() > 1) {
    index = (index + silabas - 1) % participantes.size();
    participantes.erase(participantes.begin() + index);
  }


  if (participantes[0] == 0 || participantes[0] == 1) {
    cout << "vai ganhar" << endl;
  }
  else {
    cout << "nao vai ganhar" << endl;
  }
  return 0;
}
