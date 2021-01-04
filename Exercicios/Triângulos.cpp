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

bool pitagoras(int a, int b, int c) {
    // a² = b² + c²
    int res = b + c;
    return a == res ? true : false;
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    bool veradeiroOuFalso = condicao(a, b, c);
    bool res = pitagoras(pow(a, 2), pow(b, 2), pow(c, 2));

    if (veradeiroOuFalso) {
        if (a == b && b == c) {
            cout << "a" << endl;
        }
        else { 
            cout << (res ? "r" : "o") << endl;
        }
    }    
else {
        cout << "n" << endl;
    }

    //cout << endl << pow(a, 2) << " " << pow(b, 2) << " " << pow(c, 2) << " " << pow(b, 2) + pow(c, 2);
}

