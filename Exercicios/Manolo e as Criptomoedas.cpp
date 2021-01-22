/*
Manolo e as Criptomoedas
https://neps.academy/br/exercise/184
*/

#include <bits/stdc++.h>
using namespace std;

int n;
double x, res;
vector<double>v;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x * 100);
    }

    res = v[n - 1] - v[0];
    
    cout << fixed << setprecision(2) << res;
}

/*

9
4.17 9.29 4.97 4.17 4.63 6.89 4.53 2.38 4.89
comprou => 417, vendeu por => 489 = 417 - 489 = 72



*/
