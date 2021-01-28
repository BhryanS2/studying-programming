/*
https://neps.academy/br/exercise/51
Jogo de Par ou Impar
Fonte: OBI 2016 - Primeira Fase
*/
#include <bits/stdc++.h>
#include <stdio.h>
int main() {
	int p, d1, d2, soma;
	scanf("%d", &p);

	if (p == 0) {
		scanf("%d%d", &d1, &d2);
		soma = d1 + d2;
		if (soma % 2 == 0) printf("0");
		else printf("1");

	} else {
		scanf("%d%d", &d1, &d2);
		soma = d1 + d2;
		if (soma % 2 == 0) printf("1");
		else printf("0");

	}
	return 0;
}


