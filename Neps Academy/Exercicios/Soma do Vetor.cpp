/*
https://neps.academy/br/exercise/326
Soma do Vetor
*/
#include<bits/stdc++.h>

int v[100100], num, soma;

int main() {
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &v[i]);
		soma += v[i];
	}
	printf("%d \n", soma);
	return 0;
}

