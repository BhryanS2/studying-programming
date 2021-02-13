#include <bits/stdc++.h>
using namespace std;
const int MAX = 10e6 + 10;

int v[MAX];

int main() {
    int n, d, res = 0;

    cin >> n >> d;

    for (int i = 0; i < n; v[n + i] = v[i], i++) cin >> v[i];

    int right = -1, cont = 0;

    for (int i = 0; i < n; i++) {

        while (right + 1 < i + n && cont < d) cont += v[++right];

        if (cont == d) res++;

        cont -= v[i];
    }

    cout << res << endl;
}
