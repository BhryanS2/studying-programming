#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1,  0, 0, 1, 1, 1};
int dy[8] = {-1,  0,  1, -1, 1, -1, 0, 1};

int main() {
  int n, q;
  cin >> n >> q;

  vector<vector<int>> matrix(n, vector<int>(n));
  vector<vector<int>> next(n, vector<int>(n));

  for (int i = 0; i < n; ++i) {
    string row;
    cin >> row;
    for (int j = 0; j < n; ++j) {
      matrix[i][j] = row[j] - '0';
    }
  }

  while (q--) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        int vivos = 0;
        for (int d = 0; d < 8; ++d) {
          int ni = i + dx[d];
          int nj = j + dy[d];
          if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
            vivos += matrix[ni][nj];
          }
        }

        if (matrix[i][j] == 1) {
          next[i][j] = (vivos == 2 || vivos == 3) ? 1 : 0;
        } else {
          next[i][j] = (vivos == 3) ? 1 : 0;
        }
      }
    }

    swap(matrix, next); 
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << matrix[i][j];
    }
    cout << '\n';
  }

  return 0;
}
