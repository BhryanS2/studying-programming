/*
https://neps.academy/br/exercise/50
Móbile (OBI 2015)
Fonte: OBI 2015 - Primeira Fase
*/
#include<bits/stdc++.h>
int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((a == b + c + d) && (b + c == d) && (b == c)) {
		printf("S");
	} else {
		printf("N");
	}

	return 0;
}
