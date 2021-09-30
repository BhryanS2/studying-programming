/*
Map
https://neps.academy/br/course/10/lesson/260
*/
#include <bits/stdc++.h>
using namespace std;

//criação
map <string, int> M;
//cria uma variável que mapeia strings em int

void map1() {

    /*
    Map é uma variação da estrutura set e sua implementação também é feita utilizando Red-Black Trees.
    A principal diferença entre um set e um map é o segundo armazena os conjuntos chave, valor
    e o primeiro apenas chave.
    Em um map cada elemento está diretamente ligado a um valor,
    ou seja, cada elemento armazenado no map possui um valor correspondente.
    Se tivermos um map de strings em inteiros e inserimos os pair (“Joao”, 1), (“Alana”, 10), (“Rodrigo”, 9)
    nosso map armazenará:
    "Alana" => 10
    "Joao" => 1
    "Rodrigo" => 9
    Caso façamos uma busca pela chave “Alana” receberemos o número 10 como retorno.
    */

    //Inserção

    /*
    Insere um elemento na estrutura com complexidade O(logn).
    Para inserir um elemento no map podemos utilizar qualquer uma das duas formas a seguir:
    */

    //inserimos uma variável do tipo pair diretamente no mpa
    M.insert(make_pair("Alana", 10));

    //Relacionamos o valor 10 à chave "Alana"
    M["Alana"] = 10;

    //Busca
    /*
    Para realizar uma busca no map utilizamos o comando find,
    o find retorna um ponteiro que aponta para o elemento procurado
    caso o elemento esteja no map ou para o final do map,
    caso o elemento procurado não esteja no map.
    Podemos também acessar o valor armazenado por um chave utilizando o operador [].
    Complexidade: O(logn).
    */

    //Se a chave "Alana" foi inserida no map
    cout << (M.find("Alana") != M.end() ? "Sim" : "Nao") << endl;

    //Imprime o valor correspondente a chave "Alana", no caso, o valor 10.
    cout << M["Alana"] << endl;

    //Deleção
    /*A maneira mais rápida de deletar um elemento do map é utilizando o comando erase.
    Complexidade: O(logn).*/

    M.erase("Alana"); //Apaga o elemento que possui a chave "Alana" do map
    cout << (M.find("Alana") != M.end() ? "Sim" : "Nao") << endl;
}
/*
outros métodos que também devemos conhecer sãoo os:
clear: Apaga todos os elementos
size: retorna a quantidade de elementos
begin: retorna um ponteiro para o inicio
end: retorn um ponteiro para o fim
*/

void busca() {
    /*
    Por fim, algumas vezes queremos passar por todas os elementos presentos no map e podemos fazer isso utilizando o código abaixo.
    è importante saber que quando passarmos pelos elementos,
    iremos acessar eles de forma ordenada pela chave.
    logo, no exemplo abaixo o código imprime:
    (Alana, 10) (Joao, 1) (Rodrigo, 9).
    */
    M["Joao"] = 1; //Relacionando o valor 1 à chave "Joao"
    M["Alana"] = 10; //Relacionando o valor 10 à chave "Alana"
    M["Rodrigo"] = 9; //Relacionando o valor 10 à chave "Rodrigo"

    for(map<string, int>::iterator it = M.begin(); it != M.end(); it++){
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }
}

int main() {
    map1();
    busca();
}
