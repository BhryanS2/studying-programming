#include <bits/stdc++.h>
using namespace std;
int main() {
    int p, r;
    cin >> p >> r;

    if (p == 1 && r == 1) cout << "A";
    else if (p == 0) cout << "C";
    else cout << "B";

    return 0;
}