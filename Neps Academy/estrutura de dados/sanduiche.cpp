/*
https://neps.academy/br/course/10/lesson/276
Fonte: OBI 2016 - Primeira Fase
Sanduíche
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX = 10e6 + 10;

int v[MAX];

int main() {
    int n, d, res = 0;

    cin >> n >> d;

    for (int i = 0; i < n; v[n + i] = v[i], i++) cin >> v[i];

    //for (int i = 0; i < n; v[n + i] = v[i], i++) cout << v[i] << "\n";

    int right = -1, cont = 0;

    for (int i = 0; i < n; i++) {
        //printf("for\n\nright = %d, cont = %d, vetor[i] = %d \n", right, cont, v[i]);
        while (right + 1 < i + n && cont < d) {
            cont += v[++right];
            //printf("while\n\nright = %d, cont = %d, vetor[right] = %d \n", right, cont, v[right]);
        }

        //printf("cont = %d,  d = %d\n", cont, d);

        if (cont == d) res++;

        cont -= v[i];
    }

    cout << res << endl;
}
