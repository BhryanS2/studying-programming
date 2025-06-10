#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, an, n=5, s = 0;
    while (cin >> x && x !=0)
    {
        if (x % 2 != 0) x++;
        an = x + (n - 1) * 2;
        s = (x + an) * n / 2;
        cout << s << endl;
    }


}
