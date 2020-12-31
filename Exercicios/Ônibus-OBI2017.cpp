#include <iostream>
using namespace std;

int main() {
  int N, A, B;
  int p[10][10], q;

  cin >> N >> A >> B;

  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < A; j++) {
      cin >> p[i][j];
    }
  }
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < A; j++) {
      cout << p[i][j] << " ";
    }
    cout << endl;
  }
}
/*
4 2 4
1 2
2 3
3 4
*/