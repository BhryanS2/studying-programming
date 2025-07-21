#include <bits/stdc++.h>
using namespace std;

struct Cubo {
  int h;
};

int volume(struct Cubo* cubo) {
  return pow(cubo->h, 3);
}

int main() {
  Cubo cubo;
  cin >> cubo.h;
  cout << "Volume " << volume(&cubo) << endl;
}
