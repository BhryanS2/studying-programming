#include <bits/stdc++.h>

using namespace std;

int main(){
    char operador;
    double num1,num2, res;
    cin >> operador;
    cin >> num1 >> num2;

    if(operador == 'M'){
        res = num1 * num2;
    }else{
        res = num1 / num2;
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << res << endl;
}
