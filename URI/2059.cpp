/*

*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(var, pocz, koniec) for (int var = (pocz); var <= (koniec); ++var)
#define FORD(var, pocz, koniec) for (int var = (pocz); var >= (koniec); --var)
#define PB push_back
#define MP(a, b) make_pair(a, b)
#define F first
#define S second

#define MAX 100000000

int main()
{
  int p, j1, j2, r, a;
  scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
  if (r == 1 && a == 1)
    printf("Jogador 2 ganha!\n");
  else if (r == 1 && a == 0)
    printf("Jogador 1 ganha!\n");
  else if (r == 0 && a == 1)
    printf("Jogador 1 ganha!\n");
  else
  {
    int soma = j1 + j2;
    if ((soma % 2 == 0 && p == 1) || (soma % 2 != 0 && p == 0))
      printf("Jogador 1 ganha!\n");
    else
      printf("Jogador 2 ganha!\n");
  }

  return 0;
}

// g++ 2059.cpp -o exe; cat input.txt | ./exe
