#include <bits/stdc++.h>
#include <stdio.h>
int main() {
	int senha, cont = 0;
	while (true) {
		scanf("%d", &senha);
		if (senha == 2018)break;
		else cont++;
	}
	printf("%d", cont);
	return 0;
}

