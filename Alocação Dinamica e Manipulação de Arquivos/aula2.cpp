// Função calloc
// Malloc vs Calloc
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main() {
    /*
    calloc espera receber dois valroes diferente da malloc
    calloc(qtd de elementos em bytes, tanho do elemento);
    colloc(4, sizeof(int));
    o malloc apenas aloca memoria, enquanto o calloc aloca e iunicializa todas as posições com zero
    */
    int *p1, *p2;
    p1 = (int *) malloc(2*sizeof(int));
    p2 = (int *) calloc(2, sizeof(int));

    cout << "p1 = " << p1[0] << " " << p1[1] << endl;
    cout << "p2 = " << p2[0] << " " << p2[1] << endl;

}