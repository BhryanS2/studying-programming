struct Node {
  int v;
  struct Node *d;
  struct Node *e;
};

struct Node* createNode(int a) {
  struct Node* aux = (struct Node*) malloc(sizeof(struct Node));
  aux->v= a;
  aux->e = NULL;
  aux->d = NULL;
  return aux;
}


// 20. Implemente um algoritmo recursivo para a inserção de nós em árvores binárias.
void insertNode(struct Node* root, int v) {
  if (v < root->v) {
    if (root->e == NULL) {
      root->e = createNode(v);
      return;
    }

    insertNode(root->e, v);
    return;
  }


  if (root->d == NULL) {
    root->d = createNode(v);
    return;
  }
  insertNode(root->d, v);
  return;
}

// 19. A remoção em árvores binárias foi implementada encontrando o antecessor do nó a ser removido.
// A remoção poderia ter sido implementada utilizando o sucessor deste nó. Implemente a remoção
// utilizando o sucessor.
struct Node *proximoNode(struct Node* no) {
  no = no->d;
  while (no != NULL && no->e != NULL)
      no = no->e;
  return no;
}

// 21. Implemente um algoritmo recursivo para a remoção de nós em árvores binárias.
struct Node *removeNode(struct Node* root, int dado) {
  struct Node *c = root;
  struct Node *tmp = c;

  if (c == NULL) return 0;

  if (c->v > dado) {
    root->e = removeNode(c->e, dado);
  } else if (c->v < dado) {
    root->d = removeNode(c->d, dado);
  } else {
    if (root->e == NULL) {
      tmp=root->d;
      free(root);
      return tmp;
    }
    if (root->d == NULL) {
      tmp=root->e;
      free(root);
      return tmp;
    }
    struct Node *succ = proximoNode(root);
    root->v = succ->v;
    root->d = removeNode(root->d, succ->v);
  }
  return root;
}

void showPreOrder(struct Node* root) {
  if (root == NULL) return;

  printf("%d ", root->v);
  showPreOrder(root->e);
  showPreOrder(root->d);
}

void showInOrder(struct Node* root) {
  if (root == NULL) return;

  showInOrder(root->e);
  printf("%d ", root->v);
  showInOrder(root->d);
}


void showPostOrder(struct Node* root) {
  if (root == NULL) return;

  showPostOrder(root->e);
  showPostOrder(root->d);
  printf("%d ", root->v);
}

// (a) o número de nós em uma árvore binária
// (b) o número de folhas
// (c) o número de filhos a direita
int numNode(struct Node * root) {
  if (root == NULL) return 0;
  return 1 + numNode(root->e) + numNode(root->d);
}

int numFolhas(struct Node *root) {
  if(root ==NULL) return 0;
  if(root->d == NULL && root->e == NULL) return 1;
  return numFolhas(root->e) + numFolhas(root->d);
}

int numFilhosDireita(struct Node *root) {
  if(root == NULL) return 0;
  return 1 + numFilhosDireita(root->d);
}
// 2. Elabore uma função que receba uma árvore e exiba os nós que possuem duas subárvores.
struct Node* pesquisa(struct Node* root, int item) {
  if (root == NULL) return NULL;
  if (root->v == item) return root;
  if (item < root->v) return pesquisa(root->e, item);
  return pesquisa(root->d, item);
}
// 3. Elabore uma função que receba uma árvore e exiba os nós que possuem uma subárvore.
struct Node* pesquisaComUmFilho(struct Node* root, int item) {
  if (root == NULL) return NULL;
  if (root->v == item) {
    if ((root->e != NULL && root->d == NULL) || (root->e == NULL && root->d != NULL)) {
      return root;
    } else {
      return NULL;
    }
  }
  if (item < root->v) return pesquisaComUmFilho(root->e, item);
  return pesquisaComUmFilho(root->d, item);
}
// 4. Elabore uma função que receba uma árvore e exiba os nós folhas da árvore.
void exibeNosFolhas(struct Node* root) {
  if (root == NULL) return;
  if (root->e == NULL && root->d == NULL) {
    printf("%d ", root->v);
  }
  exibeNosFolhas(root->e);
  exibeNosFolhas(root->d);
}
// 5. Elabore uma função que receba um item e escreva o endereço de memória do nó que possui o item na
// árvore. Utilize a função Pesquisa.
struct Node* pesquisaEndereco(struct Node* root, int item) {
  return pesquisa(root, item);
}
// 6. Elabore uma função que receba um item e exiba seus filhos diretos.
void exibeFilhosDiretos(struct Node* root, int item) {
  struct Node* no = pesquisa(root, item);
  if (no == NULL) {
    printf("Nó não encontrado.\n");
    return;
  }

  if (no->e != NULL) {
    printf("Filho esquerdo: %d\n", no->e->v);
  } else {
    printf("Filho esquerdo: NULL\n");
  }
  if (no->d != NULL) {
    printf("Filho direito: %d\n", no->d->v);
  } else {
    printf("Filho direito: NULL\n");
  }
}
// 7. Elabore uma função que receba um item e exiba somente a sua sub-árvore esquerda.
void exibeSubarvoreEsquerda(struct Node* root, int item) {
  struct Node* no = pesquisa(root, item);
  if (no == NULL) {
    printf("Nó não encontrado.\n");
    return;
  }
  showInOrder(no->e);
  printf("\n");
}
// 8. Elabore uma função que receba duas árvores e retorne se as mesmas são iguais ou não (retornar 0 ou 1).
int comparar(struct Node *arvore1, struct Node *arvore2) {
  if (numNode(arvore1) != numNode(arvore2)) return 0;
  if (arvore1 == NULL && arvore2 == NULL) return 1;
  if (arvore1 == NULL || arvore2 == NULL) return 0;
  if (arvore1->v != arvore2->v) return 0;
  return comparar(arvore1->e, arvore2->e) && comparar(arvore1->d, arvore2->d);
}
// 9. Elabore uma função que receba uma árvore e exiba o nó com o menor valor.
int menorValor(struct Node *root) {
  if(root == NULL) return 0;
  struct Node *c = root->e;
  while(c != NULL && c->e != NULL) {
    c = c->e;
  }
  return c->v;
}
// 10. Elabore uma função que receba como parâmetro um nó e retorne o nó sucessor deste nó.
struct Node *sucessor(struct Node* root, int item) {
  struct Node* no = pesquisa(root, item);
  if (no == NULL) return NULL;
  return proximoNode(no);
}

// 11. Levando em consideração as funções para percorrer árvores, quais funções devem ser aplicadas aos
// itens (números) 17, 11, 15, 5 e 10 para que seja exibida a sequência 10, 5, 15, 11 e 17?
// (17(11(5)(10))(15))
// percorrendo pre ordem: 17 11 5 10 15
// percorrendo em ordem: 5 10 11 15 17
// percorrendo em pos ordem: 10 5 15 11 17
// A resposta é pos ordem

// 12. Após a retirada dos elementos abaixo da árvore a seguir, como ficará a exibição da mesma utilizando as
// respectivas funções:
// • Elemento 8, pré-ordem
// • Elemento 7, em-ordem
// • Elemento 9, pós-ordem
// Removendo o 8
// Pre Order
// 9 4 2 6 7 12 10 11 16 13 14 18
// Removendo o 7
// In Order
// 2 4 6 9 10 11 12 13 14 16 18
// Removendo o 9
// Post Order
// 2 6 4 11 14 13 18 16 12 10


// 13. Elabore uma função em que receba como parâmetros dois valores a e b e imprima todos os registros
// da árvore que são maiores que a e menores que b.
void imprimirMioresAMeoresB(struct Node *root, int a, int b) {
  if (root == NULL) return;
  if (root->v > a) printf("%d maior que %d\n", root->v, a);
  if (root->v < b) printf("%d menor que %d\n", root->v, b);
  imprimirMioresAMeoresB(root->e, a, b);
  imprimirMioresAMeoresB(root->d, a, b);
}

// 14. Elabore uma função que atualizar um registro da árvore.
void update(struct Node *root, int current, int toUpdate){
  removeNode(root, current);
  insertNode(root, toUpdate);
}
// 15. Dadas duas árvores, elabore uma função que faça a união destas árvores.
struct Node* mergeTree(struct Node*t1, struct Node*t2) {
  if (t1 == NULL) return t2;
  if (t2 == NULL)  return t1;
  struct Node *aux = t2->v > t1->v
  struct Node *arvore_final

}
// 16. Dadas duas árvores, elabore uma função que faça a interseção destas árvores.

// 17. Escreva uma função que encontre a altura de uma árvore.

// 18. Usando as funções implementadas nos exercícios anteriores faça um programa que:
// • Leia três árvores (A, B e C).
// • Crie uma árvore R resultado da operação: A união (B interseção C).
// • Leia dois valores (valor 1 e valor 2).

// • Obtenha os elementos da árvore que estão entre os valores: valor1 e valor2.
// • Imprima a mediana destes elementos. Obs: o elemento da mediana está na posicao (n + 1)/2.
// Onde n é o número de elementos.


// 22. Escreva um algoritmo que imprima a árvore em níveis.
