/*
Nota Cortada
https://neps.academy/br/exercise/465
Fonte: OBI 2019 - Primeira Fase
*/
#include<stdio.h>

int main() {
	int t, b, cont;

	scanf("%d %d", &t, &b);

	cont = (b + t) * 70 / 2;

	if (cont > (70 * 160 / 2)) printf("1");
	else if (cont < (70 * 160 / 2)) printf("2");
	else printf("0");

}
