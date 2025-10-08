// 1) Faça um programa que cadastre alguns automóveis, com marca, ano,
// número da placa e quanƟdade em estoque:
// a) Crie uma opção para exibir os automóveis ordenados por ano.
// b) Crie uma opção para exibir os automóveis ordenados por marca.
// c) Crie uma opção para exibir os automóveis ordenados pelo número da
// placa.
// d) Crie uma opção para exibir os automóveis ordenados pela quanƟdade
// em estoque.

// com selection sort
#include <bits/stdc++.h>
using namespace std;

struct Automovel
{
  int ano;
  char marca[100];
  char numero_placa[20];
  int qtd;
};

void sort_by_ano(Automovel *veiculo, int tam)
{
  for (int i = 0; i < tam - 1; i++)
  {
    int menor = i;
    for (int  j = i + 1; j < tam; j++)
    {
      if(veiculo[j].ano < veiculo[menor].ano) {
        menor = j;
      }
    }
    if(i != menor) swap(veiculo[i], veiculo[menor]);
  }
}

void sort_by_marca(Automovel *veiculo, int tam)
{
  for (int i = 0; i < tam - 1; i++)
  {
    int menor = i;
    for (int  j = i + 1; j < tam; j++)
    {
      if(strcmp(veiculo[menor].marca, veiculo[j].marca) > 0) {
        menor = j;
      }
    }
    if(i != menor) swap(veiculo[i], veiculo[menor]);
  }
};

void sort_by_placa(Automovel *veiculo, int tam)
{
  for (int i = 0; i < tam - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < tam; j++)
    {
      if (strcmp(veiculo[menor].numero_placa, veiculo[j].numero_placa) > 0) menor = j;
    }
    if (i != menor) swap(veiculo[i], veiculo[menor]);
  }
};

void sort_by_qtd(Automovel *veiculo, int tam)
{
  for (int i = 0; i < tam - 1; i++)
  {
    int menor = i;
    for (int j = i + 1; j < tam; j++)
    {
      if (veiculo[menor].qtd > veiculo[j].qtd) menor = j;
    }
    if (i != menor) swap(veiculo[i], veiculo[menor]);
  }
};

void sort_automovel_by_str(Automovel *veiculo, int tam, char *campo)
{
  if (strcmp(campo, "marca") == 0)
  {
    sort_by_marca(veiculo, tam);
  }
  else if (strcmp(campo, "placa") == 0)
  {
    sort_by_placa(veiculo, tam);
  }
}

void sort_automovel_by_number(Automovel *veiculo, int tam, char *campo)
{
  if (strcmp(campo, "ano") == 0)
  {
    sort_by_ano(veiculo, tam);
  }
  else if (strcmp(campo, "qtd") == 0)
  {
    sort_by_qtd(veiculo, tam);
  }
}

void show(Automovel *veiculos, int tam)
{
  for (int i = 0; i < tam; i++)
  {
    printf("%d %s %s %d\n", veiculos[i].ano, veiculos[i].marca, veiculos[i].numero_placa, veiculos[i].qtd);
  }
}

void painel()
{
  printf("Escolha uma opcao:\n");
  printf("1 - Ordenar por ano\n");
  printf("2 - Ordenar por marca\n");
  printf("3 - Ordenar por placa\n");
  printf("4 - Ordenar por quantidade em estoque\n");
  printf("0 - Sair\n");
}

int main()
{
  int n;
  printf("Quantidade de automoveis: \n");
  scanf("%d", &n);
  Automovel veiculos[n];
  printf("Entre com ano, maca e numero");
  for (int i = 0; i < n; i++)
  {
    scanf("%d %s %s %d", &veiculos[i].ano, veiculos[i].marca, veiculos[i].numero_placa, &veiculos[i].qtd);
  }
  while (1)
  {
    painel();
    int op;
    scanf("%d", &op);
    if (op == 0)
      break;
    if (op == 1)
      sort_by_ano(veiculos, n);
    if (op == 2)
      sort_by_marca(veiculos, n);
    if (op == 3)
      sort_by_placa(veiculos, n);
    if (op == 4)
      sort_by_qtd(veiculos, n);

    show(veiculos, n);
  }
}
