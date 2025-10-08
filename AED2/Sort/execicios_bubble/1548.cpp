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
  int N, M, P, resposta;
  vector<int> original, ordenado;

  cin >> N;

  for (int k = 0; k < N; ++k)
  {
    cin >> M;

    original.assign(M, 0);
    for (int i = 0; i < M; ++i)
    {
      cin >> original[i];
    }

    ordenado = original;
    sort(ordenado.begin(), ordenado.end(), greater<int>());

    resposta = 0;
    for (int i = 0; i < M; ++i)
    {
      if (original[i] == ordenado[i])
        ++resposta;
    }

    cout << resposta << endl;
  }
  return 0;
}

// g++ exe.cpp -o exe; cat input.txt | ./exe
