/*
Reprovado, Aprovado ou Final.
https://neps.academy/br/exercise/147
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	double a, b, media, p1, p2;
	cin >> a >> b;
	p1 = 2;
	p2 = 3;
	media = (a * 2 + b * 3) / 5;

	if (media >= 7.0) cout << "Aprovado" << endl;
	else if (media < 3.0) cout << "Reprovado";
	else cout << "Final";

	return 0;
}
