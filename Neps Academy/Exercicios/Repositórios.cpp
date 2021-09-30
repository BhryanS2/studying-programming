/*
Repositórios
https://neps.academy/br/exercise/277
Fonte: OBI 2007 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, c;
map<ll, ll> web, res, instalados;

int main() {
  cin >> c >> n;

  ll p, v;

  for (int i = 0; i < c; i++) {
    cin >> p >> v;
    instalados.insert(make_pair(p, v));
  }

  for (int i = 0; i < n; i++) {
    cin >> p >> v;
    web[p] = web.find(p) != web.end() ? max(web[p], v) : v;
  }

  for (map<ll, ll>::iterator pos = instalados.begin(); pos != instalados.end(); pos++) {
    if (web.find(pos->first) != web.end()) {
      if (web[pos->first] > pos->second) {
        res[pos->first] = web[pos->first];
      }
    }
  }

  for (map<ll, ll>::iterator pos = res.begin(); pos != res.end(); pos++) {
    cout << pos->first << " " << web[pos->first] << endl;
  }
}
/*
1 2
intalados
2020 1

web
2020 5
2020 2

1 3
2020 1
2020 5
2020 2
2020 1

instalados.size() > web.size()? instalados.begin() : web.begin()
*/
