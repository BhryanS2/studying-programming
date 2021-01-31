/*
Detectando Colisões
https://old.neps.academy/lesson/237
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int li;

li x;
vector <li> q1, q2;
bool ok = false;
int maiorq1, menorq1, maiorq2, menorq2;

int main() {
    for(int i = 0; i < 4; i++) {
        cin >> x;
        q1.push_back(x);
    }
    maiorq1 = x;
    menorq1 = x;
    for(int i = 0; i < 4; i++) {
        cin >> x;
        q2.push_back(x);
    }
    maiorq2 = x;
    menorq2 = x;

    for(int i = 0; i < 4; i++) {
        if(q1[i] > maiorq1) maiorq1 = q1[i];
        if(q1[i] < menorq1) menorq1 = q1[i];
        if(q2[i] > maiorq2) maiorq2 = q2[i];
        if(q2[i] < menorq2) menorq2 = q2[i];
    }
    /*
    0 0 2 2
    1 1 3 3	
    menorq1 = 0;
    maiorq1 = 2;

    maiorq2 = 3;
    menorq2 = 1;
    */

    for(int i = menorq1; i < maiorq2; i++) {
        if(maiorq1 == i || menorq1 == i) ok = false;
        else ok = true;
    }

    cout << (ok ? 0 : 1) << endl;
}