#include <bits/stdc++.h>
using namespace std;

int main(){
    int hi, hf, mi, mf, HoraTotal, MinutoToal;
    cin >> hi >> mi >> hf >> mf;

    HoraTotal = hf - hi;
    MinutoToal = mf - mi;

    if(MinutoToal < 0){
    	MinutoToal += 60;
    	HoraTotal --;
    }

    if(HoraTotal < 0) HoraTotal += 24;


    if(hi == hf && mi == mf) cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    else cout << "O JOGO DUROU " << HoraTotal << " HORA(S) E " << MinutoToal << " MINUTO(S)\n";

}
