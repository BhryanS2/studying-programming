/*
https://neps.academy/br/exercise/150
Maior Entre Três Números
*/
#include<bits/stdc++.h>
int main() {
	int a, n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2 && n1 > n3) {
		printf("%d", n1);

	} else if (n1 == n2 && n1 > n3) {
		printf("%d", n1);

	} else if (n1 > n2 && n1 == n3) {
		printf("%d", n1);
		//numero 2
	} else if (n2 > n1 && n2 > n3) {
		printf("%d", n2);

	} else if (n2 == n1 && n2 > n3) {
		printf("%d", n2);

	} else if (n2 > n1 && n2 == n3) {
		printf("%d", n2);
		//numero 3
	} else if (n3 > n2 && n3 > n1) {
		printf("%d", n3);

	} else if (n3 == n2 && n3 > n1) {
		printf("%d", n3);

	} else if (n3 > n2 && n3 == n1) {
		printf("%d", n3);
		//todos iguais
	} else if (n1 == n2 && n2 == n3) {
		printf("%d", n1);
	}

	return 0;
}
