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
  // n pessoas
  // a pessoa vai escolher sentar mais longe possível da pessoa já sentada
  // em caso de empate, a pessoa escolhe a de menor indice
  int n; cin >> n;
  vector<int> resp(n + 1, -1);
  int esq = 2, direita = n - 1;
  resp[0] = 1; // primeira pessoa senta na posição 0
  resp[n - 1] = 2; // segunda pessoa senta na posição n-1
  while (n > 2) {
    // se a posição da esquerda estiver vazia, coloca a próxima pessoa lá
    if (resp[esq] == -1) {
      resp[esq] = n;
      n--;
      esq++;
    }
    // se a posição da direita estiver vazia, coloca a próxima pessoa lá
    else if (resp[direita] == -1) {
      resp[direita] = n;
      n--;
      direita--;
    }
    // se ambas as posições estão ocupadas, não há mais lugares para sentar
    else {
      break;
    }
  }

  return 0;
}


//g++ exe.cpp -o exe;cat input.txt | ./exe
