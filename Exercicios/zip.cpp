/*
https://neps.academy/br/exercise/35
Zip
Fonte: OBI 2017 - Terceira Fase
*/
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
	int l1, l2, c1, c2, somalia, somacarolina;
	cin >> l1 >> l2 >> c1 >> c2;

	if (l1 == l2)  somalia = (l1 + l2) * 2;
	else if (l1 == (l2 - 1) || l2 == (l1 - 1))  somalia = (l1 + l2) * 3;
	else if (l1 != l2)  somalia = l1 + l2;

	if (c1 == c2)  somacarolina = (c1 + c2) * 2;
	else if (c1 == (c2 - 1) || c2 == (c1 - 1))  somacarolina = (c1 + c2) * 3;
	else if (c1 != c2)  somacarolina = c1 + c2;


	if (somalia > somacarolina) cout << "Lia";
	else if (somacarolina > somalia) cout << "Carolina";
	else cout << "empate";

	return 0;
}
/*3
3
7
4
Lia

2
3
11
4
empate

5
5
4
3
carolina
*/

