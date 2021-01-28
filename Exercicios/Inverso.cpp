/*
https://neps.academy/br/exercise/187
Inverso

*/
#include<bits/stdc++.h>
int main() {
	int v[10];
	int i;
	for (i = 0;i < 10;i++) {
		scanf("%d", &v[i]);
	}
	for (i = 9;i >= 0;i--) {
		printf("%d\n", v[i]);
	}
	return 0;
}
