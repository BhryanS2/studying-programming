#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define MAXN 1003

using namespace std;

int n, k;

int cnt[MAXN];

int find(int pai[], int x) {

  if (pai[x] == x) return x;
  return pai[x] = find(pai, pai[x]);
}

void join(int pai[], int x, int y) {
  int a = find(pai, x);
  int b = find(pai, y);

  if (a == b) return;

  if (pai[a] > pai[b]) swap(a, b);

  pai[a] += pai[b];
  pai[b] = a;
}

int size(int pai[], int x) {
  return -pai[find(pai, x)];
}


int main(void) {
  cin >> n >> k;

  vector <int> v;

  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    v.push_back(a - 1);
  }

  for (int i : v) {
    cnt[i] = 1;
  }

  int f1[MAXN];
  int f2[MAXN];

  for (int i = 0; i < n; i++) f1[i] = -1;
  for (int i = 0; i < n; i++) f2[i] = -1;

  for (int i = 0; i < n; i++) {
    join(f1, i, v[i]);
  }

  queue <int> q;

  for (int i = 0; i < n; i++) {
    if (cnt[i] == 0) q.push(i);

  }

  while (!q.empty()) {
    int u = v[q.front()];
    q.pop();

    cnt[u] -= 1;

    if (cnt[u] == 0)  q.push(u);

  }

  for (int i = 0; i < n; i++) {
    if (cnt[i] == 1) {
      join(f2, i, v[i]);
    }
  }

  bool poss[k + 1];

  for (int i = 0; i < k + 1; i++) {
    poss[i] = false;
  }

  poss[0] = true;



  return 0;
}
