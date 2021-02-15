/*
https://neps.academy/br/exercise/596
Viagem Espacial
Fonte: OBI 2008 - Segunda Fase
*/

/*
Dada uma sequências de tiros realizados pela nave e a localização de um asteroide,
você deve dizer quantos tiros acertaram o asteroide.

A primeira linha da entrada contém quatro números inteiros N, Xc, Yc e R.
N = numero de tiros
coordenas no plano do centro asteroide(Xc, Yc)
R = raio do asteroide

para cada tiro receba 4 inteiros
x, y, X2, Y2;
representando duas coordenadas de pontos distintos da reta formada pela projeção do tiro.

2 tiros, (10, 10), raio = 5
10 1 10 3
4 11 4 10

(10, 10)
x = 10, y = 10;
r = 5;
x = 10 + 5, x = 10 -5
y = 10 + 5, y = 10 -5
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dot(ll a[2], ll b[2]) {
  return a[0] * b[0] + a[1] * b[1];
}

ll p[1000][2][2];

int main () {

  ll c[2], r;
  int n;

  cin >> n >> c[0] >> c[1] >> r;
  for (int i = 0; i < n; i++) {
    cin >> p[i][0][0] >> p[i][0][1] >> p[i][1][0] >> p[i][1][1];
  }

  int resp = 0;
  for (int i = 0; i < n; i++) {
    ll a[2], b[2], d[2];

    a[0] = p[i][1][0] - p[i][0][0];
    a[1] = p[i][1][1] - p[i][0][1];
    b[0] = c[0] - p[i][0][0];
    b[1] = c[1] - p[i][0][1];

    d[0] = b[0] * dot(a,a) - a[0] * dot(a,b);
    d[1] = b[1] * dot(a,a) - a[1] * dot(a,b);

    if (dot(d, d) <= r * r * dot(a, a) * dot(a, a)) resp++;
  }

  cout << resp << endl;
  return 0;
};

  /*
  2 10 10 5
  10 1 10 3
  4 11 4 10
  */
