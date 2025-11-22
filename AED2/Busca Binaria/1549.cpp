#include <bits/stdc++.h>
using namespace std;

double calculate_volume(double h, double b, double B, double H) {
  double r = b + (B - b) * (h / H);
  return (M_PI * h / 3.0) * (b * b + r * r + b * r);
}

int main() {
  int c;
  cin >> c;
  while (c--) {
    int n;
    double l;
    cin >> n >> l;

    double b, B, H;
    cin >> b >> B >> H;

    double vol = l / n;

    double low = 0.0;
    double high = H;
    double ans = 0.0;

    for (int i = 0; i < 100; i++) {
      double mid = low + (high - low) / 2.0;
      if (calculate_volume(mid, b, B, H) < vol) {
        ans = mid;
        low = mid;
      }
      else {
        high = mid;
      }
    }

    cout << fixed << setprecision(2) << ans << endl;
  }
  return 0;
}
