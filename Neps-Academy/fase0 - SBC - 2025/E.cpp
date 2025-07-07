#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ll y, k;
  scanf("%lld %lld", &y, &k);

  ll x = 1;
  map<ll, pair<ll, ll>> seen;
  vector<ll> steps;

  while (k > 0) {
    ll r = x % y;
    if (seen.count(r)) {
      ll start_step = seen[r].first;
      ll start_pos = seen[r].second;

      ll cycle_len = steps.size() - start_step;
      ll cycle_sum = 0;
      for (ll i = start_step; i < steps.size(); ++i) {
        cycle_sum += steps[i];
      }

      ll cycles = k / cycle_len;
      ll remaining = k % cycle_len;

      x += cycle_sum * cycles;
      for (ll i = start_step; i < start_step + remaining; ++i) {
        x += steps[i];
      }
      break;
    }

    ll g = __gcd(x, y);
    seen[r] = { steps.size(), x };
    steps.push_back(g);
    x += g;
    k--;
  }

  printf("%lld\n", x);
  return 0;
}