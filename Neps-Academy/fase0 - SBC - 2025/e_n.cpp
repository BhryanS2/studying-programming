#include <bits/stdc++.h>
using namespace std;

int main() {
    long long y, k;
    scanf("%lld %lld", &y, &k);

    long long x = 1;
    while (k > 0) {
        long long g = __gcd(x, y);
        if (g == y) {
            x += y * k;
            k = 0;
        } else {
            x += g;
            k--;
        }
    }
    printf("%lld\n", x);
    return 0;
}