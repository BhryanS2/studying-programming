// 2) Fazer uma função para:
// a. Receber dois ponteiros para char (char*) como parâmetro e um número representando
// uma certa quantidade de caracteres.
// b. procurar, no vetor apontado pelo parâmetro 1, o primeiro caracter de espaço (‘ ‘) ou o
// fim de vetor (representado pela quantidade fornecida no parâmetro 3).
// c. copiar os caracteres anteriores ao espaço no vetor indicado pelo segundo parâmetro.
// d. retornar o número de caracteres copiados.
#include <stdio.h>

int string(char *s1, char *s2, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (s1[i] == ' ' || s1[i] == '\0')
    {
      break;
    }
    s2[i] = s1[i];
  }
  s2[i] = '\0';
  return i;
}

void main()
{
  char vet[] = "abc a";
  char vet2[7];
  int n = 5;
  printf("%s %d %s", vet, string(vet, vet2, n), vet2);
  // cout << string(vet, vet2, n)
}
