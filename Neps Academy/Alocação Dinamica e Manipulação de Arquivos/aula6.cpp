/*
Manipulação de Arquivos
c tem suporte a manipular arquivos de texto
ponteiro para arquivo
para abrir um arquivo, temos que atibuir a posição de memória do arquivo para ponteiro de aqruivo

ponteiros para arquivos são do tippo FILE
ex: FILE *p;

para abrir usamos fopen

FILE *fopen(const char *filename, const char *mode);

ex: FILE *a = fopen("nomes.txt", "r");

o primeiro paramentro é o caminho e o segundo é a maneira que queremos;
fopen("arquivo.txt", "modo de abertura");
modos de abertura:
    r = leitura
    w = escrita
    a = anexar
*/
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
    FILE *ponteiro;
    //se não tiver ele cria o arquivo...
    //ponteiro = fopen("arquivo.txt", "w");

    //o modo r, como é leitura, se não existir ele não cria e da erro
    ponteiro = fopen("arquivo.txt", "r");
    if(ponteiro == NULL) cout << "arquivo nao foi aberto";
    else {
        cout << "arquivo aberto";
        fclose( ponteiro );
    }
}