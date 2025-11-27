#include <bits/stdc++.h>
using namespace std;

#define FALSE 0
#define TRUE 1

struct Node {
  struct Node *next;
  int v;
};

struct Fila {
  struct Node *first;
  struct Node *end;
};

void create(struct Fila *node) {
  node->first = NULL;
  node->end = NULL;
}

int push(struct Fila *q, int v) {
  struct Node *aux = (struct Node*)malloc(sizeof(struct Node));
  if (aux == NULL) {
    printf("Error in allocate memory for stack");
    return FALSE;
  }

  aux->v = v;
  aux->next = NULL;
  if(q->first==NULL) q->first = aux;
  if(q->end!=NULL) q->end->next = aux;
  q->end = aux;

  return TRUE;
}


int remove(struct Fila *q) {
  struct Node *aux;
  if (q->first == NULL) return FALSE;
  aux = q->first;
  q->first = aux->next;
  if(q->first == NULL) q->end = NULL;
  free(aux);
  return TRUE;
}

int isEmpty(struct Fila q){
  if(q.first == NULL && q.end == NULL) return TRUE;
  return FALSE;
}

int first(struct Fila q){
  return q.first->v;
}

int end(struct Fila q) {
  return q.end->v;
}


int main() {

}
