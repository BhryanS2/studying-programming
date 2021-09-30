/*
https://neps.academy/br/course/10/lesson/257
Pair
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    //pair nos permite armazena dois valores em uma mesma variável, ou seja, nos permite ter um par de valores.
    pair<string, int> P1; //Cria uma variável pair

    P1.first = "abelha";
    P1.second = 1; //Lê um valor do tipo string e armazena na primeira posição do pair e um valor do tipo int para a segunda posição.

    cout << "Pair 1, atribuindo \n" << P1.first << " " << P1.second << endl;
    //A primeira variável é acessada usando first e a segunda usando second
    //Uma das variáveis do pair pode até mesmo ser outro pair da forma:
    pair <string, pair<double, int> > P; //Cria uma variável pair

    P.first = "Joao"; //Nome de um aluno
    P.second.first = 8.2; //Primeira nota do aluno
    P.second.second = 10; //Segunda nota do aluno

    //Como você deve ter notado, utilizar um pair dentro do outro nem sempre é a melhor opção,
    //pois tornará o seu código cada vez mais difícil de entender, nesse caso, o uso de struct é aconselhável.
    cout << "Pair 2, comparenado \n" << P.first << " " << P.second.first << " " << P.second.second << endl;

    pair<int, string> A;
    pair<int, string> B;

    A.first = 10;
    A.second = "Joao";

    B.first = 5;
    B.second = "Ana";

    cout << "Pair 3 " << (A > B ? A.second : B.second) << endl;

    //O comparador de pair também nos permite ordenar um vetor de pair facilmente:
    cout << "Pair 4, ordenando" << endl;

    vector< pair<int, string> > V;
    pair<int, string> tmp;

    for (int i = 1;i < 10;i++) {
        tmp.first = i;
        tmp.second = "abelhas"; //Leio os valores da entrada e armazeno em um pair temporário
        V.push_back(tmp); //Adiciono o pair no vetor
    }

    sort(V.begin(), V.end()); //Ordena o vetor utilizando o comparador de desigualdade do pair, ou seja, primeiro compara pelo first e em caso de empate compara pelo second.
    for (int i = 1;i < V.size();i++) cout << "first: " << V[i].first << "\nsecond: " << V[i].second << "\n";
    cout << endl;

    /*
    A função make_pair retorna um pair com os tipos das variáveis passadas como parâmetros,
    ou seja, se você usar make_pair(“Joao”, 10)
    a função retornará um pair<string, int> com os first igual a “Joao” e o second igual a 10.
    */
    cout << "pair 5, make_pair \n";
    vector< pair<int, string> > VP;
    int a;
    string b;

    for (int i = 1;i < 10;i++) {
        a = i;
        b = "abelhao"; //Leio os valores da entrada e armazeno nas variáveis a e b
        VP.push_back(make_pair(a, b)); //Adiciono o pair no vetor utilizando make_pair
    }

    sort(VP.begin(), VP.end()); //Ordena o vetor utilizando o comparador de desigualdade do pair, ou seja, primeiro compara pelo first e em caso de empate compara pelo second.

    for (int i = 1;i < VP.size() - 1;i++) cout << "first: " << VP[i].first << "\n" << "second: " << VP[i].second << "\n";
}