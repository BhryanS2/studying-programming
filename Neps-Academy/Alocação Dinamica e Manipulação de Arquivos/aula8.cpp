/*
Leitura de Arquivos

    fgetc:
        lê um caracter de um arquivo
        int fgetc(FILE *fluxo)
        ex: char c = fget(arquivo);
        se der certo ela retrona o valor do caracter sen]ao retorn um EPF
    fgets:
        essa função lê uma string no arquivo.
        char *fgets(char *str, int tamanho, FILE *fluxo);
        ex: fgets(p, 10, arquivo);
    fscanf:
        usapada para ler uma string com formatação de arquivo
        int fscanf(FILE *fluxo, const char *formato, ...)
        ex:
            int a, b;
            fscanf (arquivo, "%d %d", &a &b);
        ela retorna um valor igual aos valores lidos, senão retorna EOF
    feof:
        usada para saber se ainda existe algo no arquivos
        int feof(FILE *fluxo)
*/

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
    //vamos ler arquivos
    ponteiro = fopen("arquivo.txt", "r");
    if(ponteiro == NULL) cout << "arquivo nao foi aberto";
    else {
        cout << "arquivo aberto " << endl;
        
        //pegamos o primeiro caracter do arquivo
        // char c = fgetc( ponteiro );
        //mostro o que foi pego do arquivo
        // cout << c;

        //agora um laço para pegar varios caracters 
        // for(int i = 0; i < 5; i++) {
        //     char c = fgetc( ponteiro );
        //     cout << c << endl;
        // }

        //poderia ler todo o arquivo assim
        // while(feof(ponteiro) == 0) {
        //     char c = fgetc( ponteiro );
        //     cout << c;
        // }

        //agora vamos ler como uma string
        // while(feof(ponteiro) == 0) {
        //     char s[20];
        //     fgets( s, 20, ponteiro);
        //     cout << "linha lida = " << s;
        // }

        //usando o fscanf
        char s[20];
        int a, b, c;
        fscanf( ponteiro, "%d %d %d", &a, &b, &c );
        printf ("lidos = %d %d %d ", a, b, c );


        fclose( ponteiro );
    }
}