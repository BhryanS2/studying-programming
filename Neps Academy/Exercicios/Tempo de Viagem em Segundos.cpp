/*
Tempo de Viagem em Segundos
https://neps.academy/br/exercise/178
*/
#include <bits/stdc++.h>
#include <stdio.h>
int main() {
	int dia1, hora1, minuto1, dia2, hora2, minuto2, totdia, toth, totm, total;

	scanf("%d %d %d %d %d %d", &dia1, &hora1, &minuto1, &dia2, &hora2, &minuto2);

	totdia = (dia2 - dia1) * 86400;
	toth = (hora2 - hora1) * 3600;
	totm = (minuto2 - minuto1) * 60;
	total = totdia + toth + totm;

	if (totdia < 0) totdia = -totdia;

	printf("%d", total);
	return 0;
}
/*
30
1
1
4
1
1

*/
