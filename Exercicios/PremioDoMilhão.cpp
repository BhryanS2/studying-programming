#include <iostream>

using namespace std;

int main() {
    int A, N, cont = 0, i1 = 1, i2 = 0;
    cin >> N;

    while (i1 <= N) {
        cin >> A;
        if (cont < 1000000) {
            cont += A;
            i2++;
        }
        i1++;
    }

    cout << i2;
}