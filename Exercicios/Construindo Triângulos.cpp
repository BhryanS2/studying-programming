//https://neps.academy/br/exercise/681
//Construindo Triângulos
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

typedef long long int li;

string res(int c, int a, int b) {
    /*
    Se c² = b² + a²  =>  triângulo retângulo
    Se c² < b² + a²  => triângulo acutângulo
    Se c² > b² + a² => triângulo obtusângulo
    */
    if (a == (c + b)) return "r";
    else if (a < (c + b)) return "a";
    else if (a > (c + b)) return "o";
}

vector<li> v;

int main() {
    li a = 0, b = 0, c = 0, aux = 0;

    cin >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    //faço A virar o maior lado
    sort(v.begin(), v.end());
    a = v[2];
    b = v[1];
    c = v[0];
    /*
    se A maior ou igual a C + B, não se forma um triângulo
    senão ele mostra o retorno da função.
    */
    cout << (a >= c + b ? "n" : res(c * c, a * a, b * b)) << endl;
}

