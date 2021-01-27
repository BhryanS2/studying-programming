/*
https://neps.academy/br/exercise/681
Construindo Triângulos
não acabdo
*/
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

typedef long long int li;

vector <li> v;
li x, n;
li a, b, c, maiorArea, result, h;

li QualTrianguloeh(li a, li b, li c) {
    if (a == (c + b)){
        maiorArea = a * (b / 2);
    }else if (a < (c + b)){
        maiorArea = (a + b + c) / 2;
    }else if (a > (c + b)){
        maiorArea = (a + b + c) / 2;
    }
}

int main() {
    cin >> n;
    for(li i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    for(li i = 0; i < v.size() - 2; i++){
        a = v[i];
        b = v[i + 1];
        c = v[i + 2];
        result = QualTrianguloeh(a * a, b * b, c * c);
    }

    // if (a == (c + b)) return "r";
    // else if (a < (c + b)) return "a";
    // else if (a > (c + b)) return "o";
}

