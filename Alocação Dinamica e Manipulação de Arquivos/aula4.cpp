/*
Alocação Dinâmica de Matrizes
uma matriz pode ser entendida como vetor de vetores,então para alocar uma matriz NxM
*/

#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main() {
    //declaro o ponteiro que aponta para ponteiro
    int **p;
    int i, j, k;
    int n = 4, m = 3;

    //scanf("%d %d", &n, &m);
    //aqui cada ponteiro terá um ponteiro para outro vetor
    p = (int **)malloc(sizeof(int*)*n);
    for(i = 0; i < n; i++) {
        p[i] = (int *) malloc(sizeof(int) * m);

    }

    k = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            p[i][j] = k;
            k++;
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}