/*
beecrowd | 1566
Altura
Por Neilor Tonin, URI BR Brazil

Timelimit: 4
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
  bool first;
  int NC, N, altura, alturas[231];

  scanf("%d", &NC);

  for (int k = 0; k < NC; ++k)
  {
    scanf("%d", &N);

    memset(alturas, 0, sizeof(alturas));

    for (int i = 0; i < N; ++i)
    {
      scanf("%d", &altura);
      alturas[altura]++;
    }

    first = true;
    for (int i = 20; i < 231; ++i)
    {
      for (int j = 0; j < alturas[i]; ++j)
      {
        if (first)
          first = false;
        else
          printf(" ");

        printf("%d", i);
      }
    }
    printf("\n");
  }

  return 0;
}

// g++ exe.cpp -o exe; cat input.txt | ./exe
