// 3) Fazer um programa para:
// a. Receber uma frase do usuário, caracter a caracter usando getch() e armazenando no
// vetor (máx. 30 caracteres). Quando o usuário digita enter (‘\r’) a recepção é finalizada.
// b. mostrar cada palavra da frase em uma linha separada, utilizando a função do exercício 2.
#include <stdio.h>
#include <conio.h>

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
  cont = 29;
  for (int i = 0; i < n; i++)
  {
    char s = getch();
    cont++;
    if (s == '\r') {
      vet[i] = s;
      break;
    }
    vet[i] = s;
  }

  vet[cont] = '\0';
  printf("Frase: %s\n", vet);
  int i = 0, j = 0;
  while (vet[i] != '\0')
  {
    j = find_space(&vet[i], vet2, n - i);
    if (j > 0) {
      printf("%s\n", vet2);
      i += j + 1;
    } else {
      break;
    }
  }
}
