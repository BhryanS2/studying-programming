// 2) Faça um programa que cadastre 10 compeƟdores em uma corrida, com
// o código do compeƟdor, nome e o tempo gasto, em minutos e segundos,
// que estes levaram para terminar a corrida.
// a) Crie uma opção para exibir os compeƟdores ordenados por código.
// b) Crie uma opção para exibir os compeƟdores ordenados por nome.
// c) Crie uma opção para exibir o resultado final da corrida.

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
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    Competidor pivo = competidor[i];
    j = i - 1;
    while ((j >= 0) && (pivo.codigo < competidor[j].codigo))
    {
      competidor[j + 1] = competidor[j];
      j--;
    }
    competidor[j + 1] = pivo;
  }
}

void sort_by_name(Competidor *competidor, int n) {
  int j = n;
  for (int i = 1; i < n; i++)
  {
    Competidor pivo = competidor[i];
    j = i - 1;
    while ((j >= 0) && (strcmp(pivo.nome, competidor[j].nome) < 0))
    {
      competidor[j + 1] = competidor[j];
      j--;
    }
    competidor[j + 1] = pivo;
  }
}

void sort_by_time(Competidor *competidor, int n) {
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    Competidor pivo = competidor[i];
    j = i - 1;
    while ((j >= 0) && (
      (pivo.minutos < competidor[j].minutos) ||
      (pivo.minutos == competidor[j].minutos && pivo.segundos < competidor[j].segundos)
    ))
    {
      competidor[j + 1] = competidor[j];
      j--;
    }
    competidor[j + 1] = pivo;
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
