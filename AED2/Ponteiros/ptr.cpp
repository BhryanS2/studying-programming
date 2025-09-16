#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;


void exemplo1() {
  int v1, v2;
  int *p;
  v1 = 5;
  p = &v1;
  v2 = *p;
  printf("%d %d %d", v1, *p, v2);
}


void exemplo2() {
  char a, b, *ptr;
  b = 'v';
  ptr = &a;
  *ptr = b;
  printf("%c %c %c %x", a, b, *ptr, ptr);
}

void exemplo3() {
  char x, *p1, *p2, *p3, *p4;
  p1 = &x;
  p2 = p1++;
  p3 = p2+4;
  p4 = p3 - 5;
  printf("%d %d %d %d", p1, p2, p3, p4);
}


void exemplo4() {
  int v[3] = {1, 2, 3};
  cout << *(v+0) << " " << v[0] << endl;
  cout << *(v+1) << " " << v[1] << endl;
  cout << *(v+2) << " " << v[2] << endl;
}

int main() {
  // exemplo1();
  // exemplo2();
  // exemplo3();
  exemplo4();
}
