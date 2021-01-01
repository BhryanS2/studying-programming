#include<bits/stdc++.h>
using namespace std;

int orig[512][512]; //matriz original, dada na entrada.

int dx[5] = {1, 0, -1, 0};
int dy[5] = {0, 1, 0, -1}; //vetores de auxílio, que servirão como 
						   //arestas no grafo.

int n, f;

void dfs(int i, int j){
	
	orig[i][j] = 100;
	//definimos a posição i j como 100, valor absurdo
	//para que, no momento de saída, se reconheca o fato que é de fato uma
	//posição atingida pela lava
	for(int k = 0; k < 4; k++){
		int ii = i + dx[k];
		int jj = j + dy[k];
		if(ii <= 0 || ii > n || jj <= 0 || j > n) continue;
		if(orig[ii][jj] > f) continue;
		dfs(ii, jj);
	}
 }


 int main(){

 	cin >> n >> f;
 	for(int i = 1; i <= n; i++){
 		for(int j = 1; j <= n; j++){
 			char c;
 			cin >> c;
 			//lemos cada posição como um caractér, e depois os transformamos
 			//em um inteiro
 			int k = c - '0';
 			orig[i][j] = k;
 		}
 	}
 	if(orig[1][1] <= f){
 		dfs(1, 1);
 	//se a posicao inicial tiver altitude menor que a forca, iniciamos a DFS
 	}
 	for(int i = 1; i <= n; i++){
 		for(int j = 1; j <= n; j++){
 			if(orig[i][j] > 9){
 				//todos os poontos atingidos estao marcados como 100
 				cout << "*";
 			}else{
 				cout << orig[i][j];
 			}
 		}
 		cout << endl;
 	}

 }