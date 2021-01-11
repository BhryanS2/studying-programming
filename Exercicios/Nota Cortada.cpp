#include <bits/stdc++.h>
using namespace std;

int a, b, t;

int main() {
    cin >> b >> t;

    a = (b + t) * 35;

    if(a > 35 * 160) cout << 1;
    else cout << (a < 35 * 160 ? 2 : 0);

}