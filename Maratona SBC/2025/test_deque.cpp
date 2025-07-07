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
  // estrutura de dados deque
  deque<int> dq;
  int m = 3, n = 2;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (i==j) {
        dq.push_back(i+j * n);
      } else {
        dq.push_front(i+j * n);
      }
    }
  }

  // imprime os elementos do deque
  cout << "Deque contents: ";
  for (const auto& elem : dq) {
    cout << elem << " ";
  }
  cout << endl;


  // o vector fazendo o papel de deque
  vector<int> resp(m * n, -1);
  // no deque, é possível acessar o front e o back
  // como no vetor não tem como acessar o front e o back diretamente,
  // vamos simular isso com dois índices
  int esq = 2, direita = m * n - 1;
  resp[0] = 1; // primeira pessoa senta na posição 0
  resp[m * n - 1] = 2; // segunda pessoa senta na posição m*n-1
  // quando i==j, coloca o elemento no final do vector
  // quando i!=j, coloca o elemento no início do vector
  while 

  // imprime os elementos do vector
  cout << "Vector contents: ";
  for (const auto& elem : resp) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}


//g++ test_deque.cpp -o exe;cat input.txt | ./exe
