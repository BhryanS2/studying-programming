/*
https://neps.academy/br/exercise/193
A Limonada de Manolo

*/

#include <bits/stdc++.h>
int main() {
	int n, c, valor = 0;
	scanf("%d%d", &n, &c);
	for (int i = 0; i < n; i++) {
		valor += c;
		c -= 1;
		if (c < 2 && c > 0 || c == 0) {
			c = 1;
		}
	}
	printf("%d\n", valor);
	return 0;
}
