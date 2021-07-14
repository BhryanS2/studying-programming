#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef double ld;

vector< pair<ld, ld> > pos;
int n;
ld dist_F;
int x = 0, y = 0;
ld distancia1, distancia2;

ld sub(double a, double b) {
  printf("%.44lf\n", (a - b));
  return (a - b);
}

ld distancia(ld xa, ld xb, ld ya, ld yb) {
  ld x = (sub(xa, xb) * sub(xa, xb)) + (sub(ya, yb) * sub(ya, yb));
  return (ld)sqrt(x);
};

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    if (pos.size() > 2) {
      distancia1 = distancia(pos[0].f, x, pos[0].s, y);
      distancia2 = distancia(pos[1].f, x, pos[1].s, y);
      if (distancia1 > dist_F) {
        if (distancia1 > distancia2) {
          pos[1].f = x;
          pos[1].s = y;
          dist_F = distancia1;
        }
        else if (distancia2 > dist_F) {
          pos[0].f = x;
          pos[0].s = y;
          dist_F = distancia2;
        }
      }
      else if (distancia2 > dist_F) {
        pos[0].f = x;
        pos[0].s = y;
        dist_F = distancia2;
      }
    }

    else {
      pos.push_back(make_pair(x, y));
      if (pos.size() == 2) {
        ld temp1 = (pos[0].f - pos[1].f);
        ld temp2 = (pos[0].s - pos[1].s);
        dist_F = sqrt((temp1 * temp1) + (temp2 * temp2));
      }
    }
  }
  printf("%.44lf\n", dist_F);

  return 0;
}
//g++ exe2.cpp -o exe2 && exe2 < input.txt
