/*
Nome:      Soco do Rulk
ID:        2151
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   779 Bytes
Submissao: 22/07/16 11:49:53
*/
#include <bits/stdc++.h>

using namespace std;

int inc_pts(int i, int j, int x, int y)
{
	int dist = max(abs(i-x), abs(j-y)); 
	
	dist = 10 - dist;
	
	if(dist < 1)		
		dist = 1;
	
	return dist;
}

int main()
{
	int C, parede = 1;
	
	scanf("%d", &C);
	
	while(C--)
	{
		int M, N, X, Y;
		
		scanf("%d%d%d%d", &M, &N, &X, &Y);
		
		X--, Y--;
		
		int matrix[M][N];
		
		for(int i = 0; i < M; i++)
		{
			for(int j = 0; j < N; j++)
			{
				scanf("%d", &matrix[i][j]);
				
				matrix[i][j] += inc_pts(i, j, X, Y);
			}
		}
		
		printf("Parede %d:\n", parede++);
		
		for(int i = 0; i < M; i++)
		{
			printf("%d", matrix[i][0]);
			
			// for(int j = 1; j < N; j++)
			// 	printf(" %d", matrix[i][j]);
				
			// puts("");
		}		
	}
}