#include<bits/stdc++.h>
using namespace std;

int marc[1123]; // o vetor de marcação
vector<int> reuniao[1123];
int n, m, I, R;

int main() {
  cin >> n >> m;
  cin >> I >> R;

  marc[I] = 1;
  for (int i = 1; i <= m; i++) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int x;
      cin >> x;
      reuniao[i].push_back(x);
      // armazenamos todas as reuniões
    }
  }

  for (int i = R; i <= m; i++) {
    int ok = 0;
    for (int j = 0; j < reuniao[i].size(); j++) {
      if (marc[reuniao[i][j]]) ok = 1;
      // verificamos se existe algum infectado nesta reunião
    }

    if (!ok) continue;
    for (int j = 0; j < reuniao[i].size(); j++) {
      marc[reuniao[i][j]] = 1;
      //se houver algum infectado, marcamos também todos os outros
    }

  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (marc[i]) ans++;
  }
  cout << ans << endl;

}
