#include <bits/stdc++.h>
using namespace std;

struct Retangulo {
  int l;
  int h;
  int area() {
    return this->h*this->l;
  }
  int perimetro() {
    return (2 * this->h) + (2*this->l);
  }
};

int main() {
  Retangulo retangulo;
  cin >> retangulo.l >> retangulo.h;
  cout << "Area " << retangulo.area() << endl;
  cout << "Perimetro " << retangulo.perimetro() << endl;
}
