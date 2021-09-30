/*
Quadrado Mágico (OBI 2011)
https://neps.academy/br/exercise/537
Fonte: OBI 2011 - Segunda Fase
*/
#include<bits/stdc++.h>
using namespace std;
//tamanho maximo possivel
#define MAX 1000

int n;
int f[MAX * MAX];
int m[MAX][MAX];

int main() {
  cin >> n;

  //leitura da matriz
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> m[i][j];

  /*
  o F vai estar zerado, ele pega a cordenada da matriz e soma um naquela posição,
  ou seja, se for numeros iguais ele soma em apenas uma posição
  */
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) f[m[i][j]]++;

  //se caso tiver algum numero diferente de 1, é pq não é um cubo magico
  for (int i = 1; i < n * n; i++)
    if (f[i] != 1) {
      cout << "0" << endl;
      return 0;
    }

  int coluna[MAX], linha[MAX], diagonalprincipal = 0, diagonalSecundaria = 0;
  int somal = 0, somac = 0;

  //soma das colunas
	for (int c = 0;c < n;c++) {
		somac = 0;
		for (int l = 0;l < n;l++) somac += m[l][c];
		coluna[c] = somac;
	}

  //se caso tiver alguma soma que seja diferente de coluna, o programa se encerra
  for (int i = 0; i < n; i++) {
    int testeh = 0;
    for (int j = 0; j < n; j++) testeh += m[i][j];
    if (testeh != coluna[i]) {
      cout << "0" << endl;
      return 0;
    }
  }


  //soma das linhas
	for (int l = 0;l < n;l++) {
		somal = 0;
		for (int c = 0;c < n;c++) somal += m[l][c];
		linha[l] = somal;
	}


  //se caso tiver alguma soma que seja diferente de linha, o programa se encerra
  for (int i = 0; i < n; i++) {
    int teste = 0;
    for (int j = 0; j < n; j++) teste += m[i][j];
    if (teste != linha[i]) {
      cout << "0" << endl;
      return 0;
    }
  }

  //diagonal principal
  for (int i = 0; i < n; i++) diagonalprincipal += m[i][i];

  //diagonal Secundária
  for (int i = 0; i < n; i++) diagonalSecundaria += m[i][n - 1 - i];

  if (somal == somac && somac == diagonalprincipal && diagonalprincipal == diagonalSecundaria) cout << diagonalprincipal << endl;
  else cout << "0" << endl;

  return 0;
}
