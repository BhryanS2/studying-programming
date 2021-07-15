/*
https://neps.academy/br/exercise/1483
Tempo de Resposta
OBI 2021
Não resolvido
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define forMap(Map) for(map<int, pair<int, char> >::iterator it = Map.begin(); it != Map.end(); it++)
#define F first
#define S second

map<int, pair<int, char> > ans;

void TempoTodosAmigos(int tempo) {
  forMap(ans) {
    if(it->S.S != 'E') {
      it->S.F += tempo;
    }
  }
  return;
}

int main() {
  int n, i, amigo;
  char typemessage;
  cin >> n;

  REP(i, n) {
    cin >> typemessage >> amigo;
    //amigo recebeu uma menssagem
    if (typemessage == 'R') {
      ans[amigo].F += 1;
      ans[amigo].S = 'R';
    }

    //amigo teve sua mensagem respondida, mas os outros não
    else if (typemessage == 'E') ans[amigo].S = 'E';

    //temos um tempo de espera entre todos os amigos
    else if (typemessage == 'T') TempoTodosAmigos(amigo);

  }

  forMap(ans) {
    cout << it->F << " " << (it->S.S == 'E' ? it->S.F : -1) << endl;
  }
  //Para cada amigo de Sara seu programa deve produzir uma linha na saída contendo dois inteiros:
  //o número do amigo e o Tempo de Resposta Total para esse amigo, em ordem crescente dos números dos amigos.
  return 0;
}


//g++ "tempo de resposta".cpp -o exe && exe < input.txt
/*
14
R 12 = 1
T 2 = 1 + 2
R 23 = 1 + 2 + 1
T 3 = 1 + 2 + 1 + 3
R 45 = 1 + 2 + 1 + 3 + 1
E 45
R 45 = 1 + 2 + 1 + 3 + 1 + 1
E 23
R 23 = 1 + 2 + 1 + 3 + 1 + 1 + 1
T 2 = 1 + 2 + 1 + 3 + 1 + 1 + 1 + 2
E 23
R 34  = 1 + 2 + 1 + 3 + 1 + 1 + 1 + 2 + 1
E 12
E 34
*/

/*
1
1
1
1
1
1
2
2
3
*/
