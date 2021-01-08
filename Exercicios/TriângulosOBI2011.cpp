//https://neps.academy/br/exercise/312
//Triângulos
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool condicao(int a, int b, int c) {
    /*
    1 2 1
    | b - c | < a < b + c
    | a - c | < b < a + c
    | a - b | < c < a + b
    
    a /\ b
     /__\
      c
    */
    int BmenosC = b - c, AmenosC = a - c, AmenosB = a - b;

    BmenosC = BmenosC < 0 ? BmenosC * -1 : BmenosC;
    AmenosC = AmenosC < 0 ? AmenosC * -1 : AmenosC;
    AmenosB = AmenosB < 0 ? AmenosB * -1 : AmenosB;

    if (BmenosC < a && a < b + c) {
        if (AmenosB < c && c < a + b) {
            if (AmenosC < b && b < a + c) return true;
            else return false;
        } else return false;
    } else return false;
}

char triangulos(int a, int b, int c){
    /*
    Se a² = b² + c²  =>  triângulo retângulo
    Se a² < b² + c²  => triângulo acutângulo
    Se a² > b² + c² => triângulo obtusângulo
    */
    int res = b + c;

    if (a == res) return 'r';
    if (a < res) return 'a';
    if (a > res) return 'o';;
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    bool veradeiroOuFalso = condicao(a, b, c);
    
    /*
    r = retângulo
    a = acutângulo
    o = obtusângulo
    n = não é possivel fazer um triângulo
    */
    if (veradeiroOuFalso) cout << triangulos(pow(a, 2), pow(b, 2), pow(c, 2)) << endl;
    else cout << "n" << endl;
}

