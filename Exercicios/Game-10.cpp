#include <iostream>

using namespace std;

int main() {
    int N, D, A, cont = 0;
    cin >> N >> D >> A;
    for (int i = 150; i != 0; --i) {
        if (A == D) {
            cout << cont;
            break;
        }
        else if (A == N) A = 0;
        A++;
        cont++;
    }
    return 0;
}
