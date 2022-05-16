#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int flores[n];
    for (int i = 0; i < n; i++) {
        cin >> flores[i];
    }

    int jovem = 0, adulto = 0, idoso = 0;

    for (int i = 0; i < n; i++) {
        if(flores[i] == 1) {
            jovem++;
        } else if(flores[i] == 2) {
            adulto++;
            idoso++;
        }
    }

    printf("Jovem: %d\nAdulto: %d\nIdoso: %d\n", jovem, adulto, idoso);
    return 0;
}