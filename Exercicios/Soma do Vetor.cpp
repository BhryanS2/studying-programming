#include<bits/stdc++.h>
int main(){
	int v[100100],num,soma = 0;
	scanf("%d", &num);
	for(int i = 0; i < num; i++){
		scanf("%d", &v[i]);
		soma += v[i];
	}
	printf("%d \n", soma);
	return 0;
}

