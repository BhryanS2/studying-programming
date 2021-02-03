/*
Tarzan
https://neps.academy/br/exercise/520
Fonte: OBI 2012 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x) ((x)*(x))
#define MAX 1010

ll X[MAX], Y[MAX], N, D;

vector<int> adj[MAX];
int marked[MAX];

void dfs(int idx) {
  if (marked[idx]) return;
  marked[idx] = 1;
  for (int i = 0; i < adj[idx].size(); i++) dfs(adj[idx][i]);
}

int main() {
  cin >> N >> D;
  D *= D;
  for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (sq(X[i] - X[j]) + sq(Y[i] - Y[j]) <= D) {
        adj[i].push_back(j);
        adj[j].push_back(i);
      }
    }
  }

  memset(marked, 0, sizeof marked);
  dfs(0);

  int ok = 1;

  for (int i = 0; i < N && ok; ok &= marked[i++]);

  cout << (ok ? "S" : "N") << endl;

  return 0;
}
