/*
Escrita em Arquivos
    fputc:
        - usada para escrever um carater no arquivo
        int fputc (const char caractere, FILE * fluxo);
        ex: fputc("x", arquivo);
        se der tudo certo ela retorna um valor intero do caracter se ocorreu uma falha ela retorna "EOF" (-1)
    fputs:
        utiliada para escrever uma string no arquivo apartir de onde o ponteiro está apontando
        int fputs (const char caractere, FILE * fluxo);
        ex: fputs ("Neps", arquivo);
        se der tudo certo ela retorna um valor não negativo, se ocorreu uma falha ela retorna "EOF" (-1)
    fprintf:
        utiliada para escrever uma string no arquivo apartir de onde o ponteiro está apontando
        int fprintf ( FILE * fluxo, const char *formato, ...);
        ex: fprintf (arquivo, "Nome = %s\n", "Neps");
        se der tudo certo ela retorna um valor iqual a quantidade de caracteres exritos, se ocorreu uma falha ela retorna "EOF" (-1)
*/

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
    FILE *ponteiro;

    ponteiro = fopen("arquivo.txt", "w");

    if(ponteiro == NULL) cout << "arquivo nao foi aberto";
    else {
        cout << "arquivo aberto";
        //escreve X no documento
        fputc('A', ponteiro);
        fputc('B', ponteiro);
        fputc('C', ponteiro);
        
        fclose( ponteiro );
    }
}