#include<iostream>

using namespace std;

int main(){
    char op;
    long int n1, n2, n3;

    cin >> n1 >> n2 >>  op >> n3;

    if(op == '*'){
        if(n2 * n3 > n1){
            cout << "OVERFLOW";
        }else{
            cout << "OK";
        }
    }else{
        if((n2 + n3) > n1){
            cout << "OVERFLOW";
        }else{
            cout << "OK";
        }
    }
}