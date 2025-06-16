#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
#define PB(x) push_back(x);

int main()
{
  int n, h = -1;
  cin >> n;
  vector<int> alturas;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x > h)
      h = x;
    alturas.PB(x);
  }
  int matriz[h][n];
  memset(matriz, 0, sizeof(matriz));

  for (int i = 0; i < alturas.size(); i++)
  {
    int altura = alturas[i];
    int preenchidas = 0;
    while (preenchidas < altura)
    {
      preenchidas++;
      int pos = (h) - preenchidas;
      matriz[pos][i] = 1;
    }
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}
