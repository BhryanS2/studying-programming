#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

void contarNoIntervalo(struct Node* root, int min, int max, int* qtd) {
  if (root == NULL) return;

  contarNoIntervalo(root->e, min, max, qtd);

  if (root->v > min && root->v < max) {
    (*qtd)++;
  }

  contarNoIntervalo(root->d, min, max, qtd);
}

void acharElementoNaPosicao(
  struct Node* root,
  int min,
  int max,
  int k,
  int* contador,
  int* resultado
) {
  if (root == NULL || *resultado != -1) return;

  acharElementoNaPosicao(root->e, min, max, k, contador, resultado);

  if (*resultado != -1) return;

  if (root->v > min && root->v < max) {
    (*contador)++;
    if (*contador == k) {
      *resultado = root->v;
      return;
    }
  }

  acharElementoNaPosicao(root->d, min, max, k, contador, resultado);
}

void imprimirNoIntervalo(struct Node* root, int min, int max) {
  if (root == NULL) return;
  imprimirNoIntervalo(root->e, min, max);
  if (root->v > min && root->v < max) {
    printf("%d ", root->v);
  }
  imprimirNoIntervalo(root->d, min, max);
}

struct Node* lerArvore() {
  struct Node* root = NULL;
  int n, val;

  printf("Digite o numero de elementos da arvore: ");
  scanf("%d", &n);

  printf("Digite os elementos da arvore:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &val);
    if (root == NULL) {
      root = createNode(val);
    }
    else {
      insertNode(root, val);
    }
  }

  return root;
}

int main() {
  printf("Exercicio 18:\n");
  // 18. Usando as funções implementadas nos exercícios anteriores faça um programa que:
  // • Leia três árvores (A, B e C).
  // • Crie uma árvore R resultado da operação: A união (B interseção C).
  // • Leia dois valores (valor 1 e valor 2).
  // • Obtenha os elementos da árvore que estão entre os valores: valor1 e valor2.
  // • Imprima a mediana destes elementos. Obs: o elemento da mediana está na posicao (n + 1)/2.
  // Onde n é o número de elementos.
  struct Node* A = NULL, * B = NULL, * C = NULL;

  printf("Leitura da arvore A:\n");
  A = lerArvore();

  printf("Leitura da arvore B:\n");
  B = lerArvore();

  printf("Leitura da arvore C:\n");
  C = lerArvore();
  printf("Arvore A (Pre Order):\n");
  showPreOrder(A);

  printf("Arvore B (Pre Order):\n");
  showPreOrder(B);

  printf("Arvore C (Pre Order):\n");
  showPreOrder(C);
  struct Node* R = mergeTree(A, intersectTree(B, C));
  int valor1, valor2;
  printf("Entre com dois valores (valor1 e valor2):\n");
  scanf("%d %d", &valor1, &valor2);
  imprimirNoIntervalo(R, valor1, valor2);
  // • Obtenha os elementos da árvore que estão entre os valores: valor1 e valor2.
  printf("Elementos entre %d e %d:\n", valor1, valor2);

  // • Imprima a mediana destes elementos. Obs: o elemento da mediana está na posicao (n + 1)/2.
  // Onde n é o número de elementos.

  int qtd = 0;
  contarNoIntervalo(R, valor1, valor2, &qtd);

  if (qtd > 0) {
    int posicaoMediana = (qtd + 1) / 2;
    int contadorAtual = 0;
    int valorMediana = -1;

    acharElementoNaPosicao(R, valor1, valor2, posicaoMediana, &contadorAtual, &valorMediana);

    printf("Quantidade de elementos no intervalo: %d\n", qtd);
    printf("Posicao da mediana: %d\n", posicaoMediana);
    printf("Valor da Mediana: %d\n", valorMediana);
  }
  else {
    printf("Nenhum elemento encontrado neste intervalo.\n");
  }

  printf("Programa finalizado.\n\n\n");
  return 0;

}
