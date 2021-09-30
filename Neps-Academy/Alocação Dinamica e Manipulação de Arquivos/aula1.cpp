#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main() {
    //alocando memoria
    // int *p;
    // p recebe duas posições de memoria
    // p = (int *)malloc(sizeof(int) * 2);
    // //para atribuir os valores podemos fazer da seguinte maneira 
    // p[0] = 4;
    // *(p + 1) = 5;
    // cout << p[0] << " " << p[1] << endl;



    // char *p;
    //p recebe duas posições de memoria
    // p = (char *)malloc(sizeof(char) * 2);
    // para atribuir os valores podemos fazer da seguinte maneira 
    // p[0] = 'a';
    // *(p + 1) = 'b';
    // cout << p[0] << " " << p[1] << endl;

    //Desalocando memoria
    int *p;
    //p recebe duas posições de memoria
    p = (int *)malloc(sizeof(int) * 2);
    //para atribuir os valores podemos fazer da seguinte maneira 
    p[0] = 4;
    *(p + 1) = 5;
    cout << p[0] << " " << p[1] << endl;
    free(p);
    //temos que liberar sempre depois de usar a região de memoria para oq quermos
    //aqui no caso a intenção é mostrar o que consiguimos alocar na mermoria 
}