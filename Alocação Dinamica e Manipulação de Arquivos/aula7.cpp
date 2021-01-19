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
    //nessa operação ele apga e escrefve tudo novamente
    //ponteiro = fopen("arquivo.txt", "w");

    //nesta operação ele apenas escreve mais coisas não apaga nada
    ponteiro = fopen("arquivo.txt", "a");

    if(ponteiro == NULL) cout << "arquivo nao foi aberto";
    else {
        cout << "arquivo aberto";
        //escreve X no documento
        //fputc('A', ponteiro);

        //escreve uma string no txt
        // fputs("NepsAcademy\n", ponteiro);
        // fputs("é\n", ponteiro);
        // fputs("muito boa", ponteiro);

        //escreve uma string em um formato de printf
        fprintf( ponteiro, "NepsAcademy %d + %d = %d", 11, 10, 10 + 11);


        //fecha o arquivo
        fclose( ponteiro );
    }
}