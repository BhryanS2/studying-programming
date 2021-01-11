#include <bits/stdc++.h>
using namespace std;

int fatorial(int n) {
    if(n == 0) return 1;
    return (n * fatorial(n - 1));
}

int main() {
    int n;
    cin >> n;
    cout << fatorial(n) << endl;
}
