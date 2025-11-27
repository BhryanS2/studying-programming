#include <stdio.h>
#include <stdlib.h>

#ifndef __PILHA__
#define __PILHA__

#define FALSE 0
#define TRUE 1

struct Node {
  struct Node *node;
  int v;
};

struct Pilha {
  struct Node *top;
};

void create(struct Pilha *node) {
  node->top = NULL;
}

int push(struct Pilha *p, int v) {
  struct Node *aux = (struct Node*)malloc(sizeof(struct Node));
  if (aux == NULL) {
    printf("Error in allocate memory for stack");
    return FALSE;
  }

  aux->v = v;
  aux->node = p->top;
  p->top = aux;
  return TRUE;
}


int pop(struct Pilha *p, int *v) {
  struct Node *aux;
  if (p->top == NULL) return FALSE;
  aux = p->top;
  p->top = p->top->node;
  *v = aux->v;
  free(aux);
  return TRUE;
}

int isEmpty(struct Pilha s){
  if(s.top ==NULL) return TRUE;
  return FALSE;
}

int top(struct Pilha s){
  return s.top->v;
}

#endif
