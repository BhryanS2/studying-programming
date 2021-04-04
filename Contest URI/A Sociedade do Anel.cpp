#include <bits/stdc++.h>
using namespace std;

int N, anao, elfo, humano, mago, hobbits;
vector<char> tipo;

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    string temp1;
    char temp2;
    cin >> temp1 >> temp2;
    tipo.push_back(temp2);
  }
  for (int i = 0; i < tipo.size(); i++) {
    switch (tipo[i]) {
    case 'A':
      anao++;
      break;
    case 'E':
      elfo++;
      break;
    case 'H':
      humano++;
      break;
    case 'M':
      mago++;
      break;
    case 'X':
      hobbits++;
      break;
    }
  }
  cout << hobbits << " Hobbit(s)" << endl;
  cout << humano << " Humano(s)" << endl;
  cout << elfo << " Elfo(s)" << endl;
  cout << anao << " Anao(s)" << endl;
  cout << mago << " Mago(s)" << endl;
}
