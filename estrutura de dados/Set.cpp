/*
https://neps.academy/br/course/10/lesson/262
Set
*/
#include <bits/stdc++.h>
using namespace std;

void set1() {
    cout << "inicio set 1" << endl;
    /*
    Set é a implementação do C++ para as Red-Black Trees.
    Esse tipo de árvore expande o conceito de uma árvore de busca binária
    e nos permite usar operações de busca, inserção e deleção em complexidade O(logn).
    */

    //Criação
    set<int> S; //Cria uma variável do tipo set para armazenar números inteiros

    //Inserção

    /*Insere um elemento na estrutura, de forma similar a adicionar o elemento a um vector (vetor dinâmico),
    porém para manter a organização na árvore, a complexidade é O(logn),
    diferente do vector que possui uma inserção mais rápida (O(1)).
    É importante notar que a estrutura set não adiciona elementos repetidos.
    */
    S.insert(10);
    S.insert(3);

    //Busca
    if (S.find(3) != S.end()) {//Se 3 está no conjunto
        cout << 3 << endl;
    }

    //Deleção
    //A maneira mais rápida de deletar um elemento do set é utilizando o comando erase.
    //Complexidade: O(logn).
    S.erase(10); //Apaga o elemento 10 do set
    cout << "fim set 1" << endl;
}
/*
Outros métodos que também devemos conhecer são os:
clear: Apaga todos os elementos.
size: Retorna a quantidade de elementos.
begin: Retorna um ponteiro para o inicio do set
end: Retorna um ponteiro para o final do set
*/
void set2() {
    cout << "inicio set 2" << endl;
    set<int> S;
    /*
    Por fim, algumas vezes queremos passar por todos os elementos presentes no set e podemos fazer isso utilizando o código abaixo.
    É importante saber que quando passarmos pelos elementos,
    iremos acessar eles de forma ordenada. Logo, no exemplo abaixo o código imprime 3 7 10.
    */
    S.insert(10);
    S.insert(3);
    S.insert(7);

    //percorrendo um set
    for (set<int>::iterator it = S.begin(); it != S.end(); it++) cout << *it << " ";
    cout << "\n";
    S.erase(7);
    for (set<int>::iterator it = S.begin(); it != S.end(); it++) cout << *it << " ";
    cout << "\n";
    cout << "fim set 2" << endl;
}
int main() {
    set1();
    set2();
}
