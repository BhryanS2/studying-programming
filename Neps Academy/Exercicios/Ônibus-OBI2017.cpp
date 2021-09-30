/*
https://neps.academy/br/exercise/36
Ônibus
Fonte: OBI 2017 - Terceira Fase
*/

#include <iostream>
#include <vector>

#define MAX 10001

using namespace std;

vector<int> g[MAX];
int N, A, B;

bool dfs( int atual, int pai, int dist, int destino ){

  if ( atual == destino ){
    cout << dist << endl;
    return true;
  }

  for ( auto p: g[atual] )
    if ( p != pai )
      if ( dfs( p, atual, dist + 1, destino ) )
	return true;

  return false;
}

int main(){
  int P,Q;

  cin >> N >> A >> B;
  for ( int i = 1; i <= N-1; i++ ){
    cin >> P >> Q;
    g[P].push_back(Q);
    g[Q].push_back(P);
  }

  dfs( A, -1, 0, B );

  return 0;
}
