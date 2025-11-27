#include <bits/stdc++.h>
using namespace std;

struct Node {
  struct Node *node;
  char v;
};

struct Pilha {
  struct Node *top;
};

void create(struct Pilha *node) {
  node->top = NULL;
}

bool push(struct Pilha *p, char v) {
  struct Node *aux = (struct Node*)malloc(sizeof(struct Node));
  if (aux == NULL) return false;

  aux->v = v;
  aux->node = p->top;
  p->top = aux;
  return true;
}

bool pop(struct Pilha *p) {
  struct Node *aux;
  if (p->top == NULL) return false;
  aux = p->top;
  p->top = p->top->node;
  free(aux);
  return true;
}

bool isEmpty(struct Pilha s){
  if(s.top == NULL) return true;
  return false;
}

int top(struct Pilha s){
  return s.top->v;
}

int main() {
  struct Pilha pilha;
  char s, sentenca[1001];
  bool correct = true;

  while (scanf("%s", sentenca) != EOF)
  {
    correct = true;
    create(&pilha);
    for (int i = 0; i < strlen(sentenca); i++)
    {
      s = sentenca[i];
      if (s == '(') {
        push(&pilha, s);
      }
      else if (s == ')') {
        if(isEmpty(pilha)) {
          correct = false;
          break;
        }
        pop(&pilha);
      }
    }
    if (correct && isEmpty(pilha)) cout << "correct" << endl;
    else cout << "incorrect" << endl;
  }

  return 0;

}
