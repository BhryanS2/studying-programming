#include <bits/stdc++.h>
using namespace std;

struct Ponto
{
  int x, y;
};

double dist(Ponto a, Ponto b) {
  return sqrt(pow(a.x - b.x, 2 ) + pow(a.y - b.y, 2));
}

int main()
{
  Ponto a, b;
  cout << "Entre com os dados do ponto A:" << endl;
  cin >> a.x >> a.y;
  cout << "Entre com os dados do ponto B:" << endl;
  cin >> b.x >> b.y;
  cout << dist(a, b) << endl;
}
