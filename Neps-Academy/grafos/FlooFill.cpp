#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

/*
foram encontradas inscrições a respeito de certos sobreviventes de uma guerra.
Descobriu-se que que a inscrições descreviam relações de parentesco numa certa população.
Seu problema é determinar quantas famílias distintas existem
*/

/*
O Algoritmo que vamos usar é Flood Fill

Flood Fill se trata da ideia de ir prenchendo um grafo como se fosse um fluxo (como o próprio nome, em inglês, sugere).
Vamos abordar duas maneiras muito conhecidas para se resolver esse tipo de problema:
busca em profundidade (DFS) e busca em largura (BFS).

DFS (depth-first-search) se trata de, em cada passo, olhar os vizinhos do nó V que se está avaliando e,
para cada um deles cuja componente ainda não foi determinada,
fazer sua componente ser a mesma de V e chamar a função recursivamente nele.

BFS (breadth-first-search) se trata de fazer o mesmo procedimento da DFS.
Porém, em vez de chamar a função recursivamente em um vizinho,
este é adicionado a uma fila e processado posteriormente.

A DFS é mais fácil de se implementar e de se debugar. A BFS também tem suas vantagens, que veremos em breve.
Ambas rodam em tempo O(V + E), onde V é o número de vértices e E o número de arestas.
*/

// componente[i] se trata da componente do vértice i.
// Inicialmente, componente[i] = -1 para todo vértice.
// Faremos a DFS como sendo uma função recursiva.
// Antes de chamar a DFS no primeiro nó, definimos sua componente
vector< vector<int> > vizinhos(10);
int componente[10];


void DFS(int x){ // vértice com o qual vamos trabalhar

	// usaremos lista de adjacência
	for(int i = 0;i < (int)vizinhos[x].size();i++){ // para todo V vizinho a X

		int v = vizinhos[x][i];

		if(componente[v] == -1){
			componente[v] = componente[x];
			DFS(v);
		}
	}
}

//Para fazer a BFS, em vez de chamar a função recursivamente,
//adicionamos o vizinho numa fila para ele ser posteriormente processado.

//  o array componente está inicializado para -1 em todas suas casas
int valor;
void BFS(int x){

	queue<int> fila;
	fila.push(x); // fila da nossa BFS

	componente[x] = valor; // colocamos o valor adequado aqui

	int atual = 0; // atual posição que estamos na fila

	while(!fila.empty()){ // Enquanto a fila não for vazia

		// vamos trabalhar com o primeiro da fila
		int v = fila.front();
		fila.pop(); // para movermos o elemento da fila

		for(int i = 0;i < (int)vizinhos[v].size();i++){

			int u = vizinhos[v][i];

			if(componente[u] == -1){

				// se u ainda não tiver sido visitado, o acrescentamos a fila
				componente[u] = componente[v];
				fila.push(u);
			}
		}
	}
}

int main() {
  memset(componente, -1, sizeof(componente[0]));
}
