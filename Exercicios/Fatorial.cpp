/*
Fatorial
https://neps.academy/br/exercise/158
*/
#include<bits/stdc++.h>
int main() {
	int n, mult;

	scanf("%d", &n);

	for (mult = 1;n > 1;n--) {
		mult = mult * n;
	}

	printf("%d\n", mult);

	return 0;
}
