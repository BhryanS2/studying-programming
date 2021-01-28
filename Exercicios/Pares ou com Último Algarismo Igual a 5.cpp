/*
Pares ou com Último Algarismo Igual a 5
https://neps.academy/br/exercise/177
*/
#include<bits/stdc++.h>
int main() {
	int x, y, z;
	int i = 0;

	scanf("%d %d %d", &x, &y, &z);

	if (x % 2 == 0 || x % 5 == 0) i++;
	if (y % 2 == 0 || y % 5 == 0) i++;
	if (z % 2 == 0 || z % 5 == 0) i++;

	printf("%d", i);
	return 0;
}
