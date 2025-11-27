#include <stdio.h>
#include <stdlib.h>

#ifndef __LINKEDLISTD__
#define __LINKEDLISTD__

#define FALSE 0
#define TRUE 1
#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int v;
  struct Node *next;
  struct Node *prev;
};

struct List
{
  struct Node *ini;
  struct Node *end;
  int length;
};
void create(struct List *q)
{
  q->ini = NULL;
}

int isEmpty(struct List q)
{
  if (q.ini == NULL)
    return TRUE;
  else
    return FALSE;
}

void insert_u(struct List *ls, int d)
{
  struct Node *aux = (struct Node *)malloc(sizeof(struct Node));
  if (aux == NULL)
    return;

  aux->v = d;
  aux->next = NULL;

  if (ls->ini == NULL)
    ls->ini = aux;
  if (ls->end != NULL)
    ls->end->next = aux;
  ls->end = aux;
}

void insert_s(struct List *ls, int d)
{
  struct Node *aux = (struct Node *)malloc(sizeof(struct Node));
  struct Node *p, *n, *c;

  if (aux == NULL)
    return;
  aux->v = d;
  aux->next = NULL;

  p = NULL;
  c = ls->ini;

  while (c != NULL && d > c->v)
  {
    p = c;
    c = c->next;
  }
  if (p == NULL)
  {
    aux->next = ls->ini;
    ls->ini = aux;
    return;
  }
  p->next = aux;
  aux->next = c;
}


void insert_p(struct List *l, int position, int value) {
  int count = 0;
  int length = l->length;
}

void remove(struct List *q, int d)
{
  struct Node *aux, *c, *p;
  if (d == (q->ini)->v)
  {
    aux = q->ini;
    q->ini = (q->ini)->next;
    free(aux);
    return;
  }

  p = q->ini;
  c = (q->ini)->next;
  while (c != NULL && c->v != d)
  {
    p = c;
    c = c->next;
  }

  if (c != NULL)
  {
    aux = c;
    p->next = c->next;
    free(aux);
    return;
  }

  q->length--;
}

void show(struct List q)
{
  struct Node *aux;
  aux = q.ini;
  if (isEmpty(q))
    return;
  while (aux != NULL)
  {
    printf("%d ", aux->v);
    aux = aux->next;
  }
}

#endif
