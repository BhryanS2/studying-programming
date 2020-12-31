#include<bits/stdc++.h>
int main() {
	double a, b, media, p1, p2;
	scanf("%lf", &a);
	scanf("%lf", &b);
	p1 = 2;
	p2 = 3;
	media = (a * p1 + b * p2) / (p1 + p2);

	if (media >= 7.0)
		printf("Aprovado");
	else if (media < 3.0)
		printf("Reprovado");
	else
		printf("Final");
	return 0;
}
