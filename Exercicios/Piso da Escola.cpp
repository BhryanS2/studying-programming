#include<bits/stdc++.h>
int main() {
	int l, c, aux, aux2;
	scanf("%d %d", &l, &c);
	aux = 2 * (l * c) - l - c + 1;
	aux2 = 2 * ((l - 1) + (c - 1));
	printf("%d\n", aux);
	printf("%d\n", aux2);
	return 0;
}
