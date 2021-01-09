#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, somaAB, somaCD, res;

    somaAB = a > b ? a - b : b - a;
    somaCD = c > d ? c - d : d - c;

    res = somaAB > somaCD ? somaAB - somaCD : somaCD - somaAB;
    
    cout << res << endl;
}