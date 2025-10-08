// 2) Faça um programa que cadastre 10 compeƟdores em uma corrida, com
// o código do compeƟdor, nome e o tempo gasto, em minutos e segundos,
// que estes levaram para terminar a corrida.
// a) Crie uma opção para exibir os compeƟdores ordenados por código.
// b) Crie uma opção para exibir os compeƟdores ordenados por nome.
// c) Crie uma opção para exibir o resultado final da corrida.
//
#include <bits/stdc++.h>
using namespace std;

struct Competidor
{
  int codigo;
  char nome[100];
  int minutos;
  int segundos;
};

void sort_by_id(Competidor *competidor, int n) {
  for (int i = 0; i < n - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < n; j++)
    {
      if (competidor[menor].codigo > competidor[j].codigo) menor = j;
    }
    if (i != menor) swap(competidor[i], competidor[menor]);
  }
}

void sort_by_name(Competidor *competidor, int n) {
  for (int i = 0; i < n - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < n; j++)
    {
      if ((strcmp(competidor[menor].nome, competidor[j].nome) > 0)) menor = j;
    }
    if (i != menor) swap(competidor[i], competidor[menor]);
  }
}

void sort_by_time(Competidor *competidor, int n) {
  for (int i = 0; i < n - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < n; j++)
    {
      if ((competidor[menor].minutos > competidor[j].minutos) ||
      (competidor[menor].minutos == competidor[j].minutos && competidor[menor].segundos > competidor[j].segundos)) menor = j;
    }
    if (i != menor) swap(competidor[i], competidor[menor]);
  }
}

int main() {
  int n = 10;
  Competidor competidores[n];
  printf("Entre com codigo, nome, minutos e segundos\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d %s %d %d", &competidores[i].codigo, competidores[i].nome, &competidores[i].minutos, &competidores[i].segundos);
  }
  while (1)
  {
    printf("Escolha uma opcao:\n");
    printf("1 - Ordenar por codigo\n");
    printf("2 - Ordenar por nome\n");
    printf("3 - Ordenar por tempo\n");
    printf("0 - Sair\n");
    int op;
    scanf("%d", &op);
    if (op == 0) break;
    else if (op == 1) sort_by_id(competidores, n);
    else if (op == 2) sort_by_name(competidores, n);
    else if (op == 3) sort_by_time(competidores, n);
    for (int i = 0; i < n; i++)
    {
      printf("%d %s %d:%d\n", competidores[i].codigo, competidores[i].nome, competidores[i].minutos, competidores[i].segundos);
    }
  }
  return 0;
}
