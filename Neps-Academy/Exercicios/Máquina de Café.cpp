/*
https://neps.academy/br/exercise/95
Máquina de Café
Fonte: Maratona de Programação da SBC 2017
*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
	int pessoas1, pessoas2, pessoas3;
	int andar1, andar2, andar3, menor;

	scanf("%d%d%d", &pessoas1, &pessoas2, &pessoas3);

	andar1 = (pessoas2 * 2) + (pessoas3 * 4);
	andar2 = (pessoas1 * 2) + (pessoas3 * 2);
	andar3 = (pessoas1 * 4) + (pessoas2 * 2);

	menor = min(andar1, min(andar2, andar3));

	printf("%d", menor);
	return 0;
}

