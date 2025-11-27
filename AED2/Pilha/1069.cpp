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
  int n;
  string s;
  struct Pilha p;
  cin >> n;
  while(n--) {
    cin >> s;
    create(&p);
    int count =0;
    for (int i = 0; i < s.length(); i++)
    {
      char c = s[i];
      if(c == '<') push(&p, c);
      else if(c == '>' && !isEmpty(p)) {
        count++;
        pop(&p);
      }
    }
    cout << count << endl;
  }

  return 0;
}
