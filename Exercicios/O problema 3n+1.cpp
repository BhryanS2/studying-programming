#include <iostream>
using namespace std;

int cont(int N) {
    int cont = 0;
    int auxP, auxI;
    while (N != 1) {
        if (N % 2 == 0) {
            auxP = N / 2;
            N = auxP;
            cont++;
        }
        else {
            auxI = (3 * N) + 1;
            N = auxI;
            cont++;
        }
    }
    return cont;
}

int main() {
    int N;

    cin >> N;

    cout << cont(N) << endl;

}
/*
f(N)= 2/N, se N � par

f(N)=3*N+1, se N � impar*/
