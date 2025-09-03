// 3) Fazer um programa para:
// a. Receber uma frase do usuário, caracter a caracter usando getch() e armazenando no
// vetor (máx. 30 caracteres). Quando o usuário digita enter (‘\r’) a recepção é finalizada.
// b. mostrar cada palavra da frase em uma linha separada, utilizando a função do exercício 2.
#include <bits/stdc++.h>
using namespace std;

int find_space(char *s1, char *s2, int n)
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

int main()
{
  // string s;
  // getline(cin, s);
  // for(char c : s) {
  //   if (c == ' ') {
  //     cout << endl;
  //     continue;
  //   }
  //   cout << c;
  // }

  char vet[33], vet2[33], n = 30, cont = 0;
  strcpy(vet, "Exemplo de entrada a");
  cont = 29;
  // for (int i = 0; i < n; i++)
  // {
  //   char s = getch();
  //   cont++;
  //   if (s == '\r') {
  //     vet[i] = s;
  //     break;
  //   }
  //   vet[i] = s;
  // }
  int pos = find_space(vet, vet2, n);
  char fatia[30];
  if (vet[pos] == ' ')
    pos++;
  strncpy(fatia, vet + pos, strlen(vet));

  printf("%s\n", vet2, pos);

  while (pos != 0)
  {
    pos = find_space(fatia, vet2, strlen(fatia));
    strncpy(fatia, fatia + pos, strlen(fatia));
    if (vet[pos] == ' ')
      pos++;
    printf("%s %d\n", vet2, pos);
    // break;
  }
}
