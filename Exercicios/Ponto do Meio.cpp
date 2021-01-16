/*
Ponto do Meio
https://old.neps.academy/problem/474
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int li;

li f(int x) {
    //se x igual  a zero retorne 2
    if(x == 0) return 2;
    //senão return a expreção f(x)=2∗f(x−1)−1
    return 2 * f( x - 1) - 1;
}

int main() {
    int n;

	cin >> n;

	long long resposta = f(n);

	//é necessário ainda obter a área do quadrado
	resposta *= resposta;

	cout << resposta << "\n";
}