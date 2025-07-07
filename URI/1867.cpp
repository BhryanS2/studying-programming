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

int main() {
  char a[102], b[102];
  while (scanf("%s %s", a, b)) {
    if (strcmp(a, "0") == 0 && strcmp(b, "0") == 0) {
      break;
    }
    // soma dos digitos até A ter um algarismo, e B ter um algarismo
    while(strlen(a) > 1) {
      int soma = 0;
      for (int i = 0; a[i] != '\0'; i++) {
        soma += a[i] - '0';
      }
      sprintf(a, "%d", soma);
    }
    while(strlen(b) > 1) {
      int soma = 0;
      for (int i = 0; b[i] != '\0'; i++) {
        soma += b[i] - '0';
      }
      sprintf(b, "%d", soma);
    }
    // comparar quem é maior
    if (strcmp(a, b) > 0) {
      printf("1\n");
    } else if (strcmp(a, b) < 0) {
      printf("2\n");
    } else {
      printf("0\n");
    }
  }
  return 0;
}


//g++ 1867.cpp -o exe;cat input.txt | ./exe
