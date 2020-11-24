#include <iostream>
using namespace std;
int main(){
    int tam,acertos = 0;
    string gab,res;
    cin >> tam >> gab >> res;

    for(int i = 0; i < tam; i++){
        if(res[i] == gab[i]){
            acertos= acertos + 1;
        }
    }

    cout <<acertos;
}