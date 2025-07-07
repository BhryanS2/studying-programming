#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

void reverse(char* str) {
  int i = 0;
  int j = strlen(str) - 1;
  while (i < j) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    i++;
    j--;
  }
}

int main() {
  char l[30];

  while (scanf("%s", l) == 1) {
    char a[10], b[10], c[10];
    int i = 0, j = 0;

    // Copiar 'a'
    while (l[i] != '+') {
      a[j++] = l[i++];
    }
    a[j] = '\0';
    i++; // pular '+'

    // Copiar 'b'
    j = 0;
    while (l[i] != '=') {
      b[j++] = l[i++];
    }
    b[j] = '\0';
    i++; // pular '='

    // Copiar 'c'
    strcpy(c, &l[i]);

    reverse(a);
    reverse(b);
    reverse(c);

    // Converter para inteiros
    int na = atoi(a);
    int nb = atoi(b);
    int nc = atoi(c);

    if (na + nb == nc) cout << "True" << endl;
    else cout << "False" << endl;

    if (strcmp(l, "0+0=0") == 0)
      break;
  }

  return 0;
}


//g++ 1728.cpp -o exe;cat input.txt | ./exe
