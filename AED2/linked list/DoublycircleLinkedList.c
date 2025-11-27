#include <stdio.h>
#include <stdlib.h>

struct Node {
  int v;
  struct Node *next;
  struct Node *prev;
};

struct CircleD
{
  struct Node *first;
  struct Node *end;
};

void insert_u(struct CircleD *ls, int d) {
  struct Node *aux = (struct Node *)malloc(sizeof(struct Node));
  if (aux == NULL) return;
  if (ls->first == NULL) {
    aux->v = d;
    aux->next = NULL;
    aux->prev = NULL;
    ls->first = aux;
    ls->end = aux;
    return;
  }

  aux->v = d;
  aux->next = NULL;
  aux->prev = ls->end;
  ls->end->next = aux;
  ls->end = aux;
  return;
}

void show(struct CircleD q, int mode) {
  struct Node *aux;
  if(isEmpyt(q)) return;
  aux = mode ? q.first : q.end;
  while(aux != NULL) {
    printf("%d ",aux->v);
    aux = mode ? aux->next : aux->prev;
  }
  printf("\n");
}

void remove(struct CircleD *l, int v){
  struct Node *aux, *current, *previus;
  aux = l->first;
  if(v == aux->v) {
    if(aux->next == NULL) {
      l->first = NULL;
      l->end = NULL;
      free(aux);
      return;
    }

    l->first = aux->next;
    l->first->prev = aux->prev;
    free(aux);
    return;
  }

  previus = l->first;
  current = l->first->next;

  while (current != NULL && current->v != v)
  {
    previus = current;
    current = current->next;
  }

  if(current == NULL) return;

  aux = current;
  previus->next = current->next;

  current->next->prev= current->prev;
  if(current->next == NULL) {
    previus->next = NULL;
    l->end = previus;
  }

  free(aux);
  return;
}

void main() {

}
