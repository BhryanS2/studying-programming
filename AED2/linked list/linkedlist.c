#include <stdio.h>
#include <stdlib.h>

struct Node {
  int v;
  struct Node *next;
  struct Node *prev;
};

struct List
{
  struct Node *ini;
  struct Node *end;
};

void insert_u(struct List *ls, int d) {
  struct Node *aux = (struct Node *)malloc(sizeof(struct Node));
  if (aux == NULL) return;

  aux->v = d;
  aux->next = NULL;

  if(ls->ini==NULL) ls->ini = aux;
  if(ls->end!=NULL) ls->end->next = aux;
  ls->end = aux;
}

void insert_s(struct List *ls, int d) {
  struct Node *aux = (struct Node*) malloc(sizeof(struct Node));
  struct Node *p, *n, *c;

  if (aux == NULL) return;
  aux->v=d;
  aux->next=NULL;

  p = NULL;
  c = ls->ini;

  while (c != NULL)
  {
    /* code */
  }

}

void main() {
  linkedList l;
  l.next = createNode(1);
  l.next.next
}


struct Node* createNode(int v) {
  struct Node*aux = (struct Node*) malloc(sizeof(struct Node));
  aux->v = v;
  return aux;
}


void insert() {
  next = createNode(v);
}