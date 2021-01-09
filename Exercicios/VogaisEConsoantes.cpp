#include <bits/stdc++.h>
using namespace std;

string Vogais(string s) {
    string v;
    for(int i = 0; i < s.size(); i++) {
        switch (s[i]){
            case 'a':
                v += s[i];
                break;
            
            case 'A':
                v += s[i];
                break;
            case 'e':
                v += s[i];
                break;
            
            case 'E':
                v += s[i];
                break;
            case 'i':
                v += s[i];
                break;
            
            case 'I':
                v += s[i];
                break;

            case 'o':
                v += s[i];
                break;
            
            case 'O':
                v += s[i];
                break;

            case 'u':
                v += s[i];
                break;
            
            case 'U':
                v += s[i];
                break;
                
            default:
                break;
        }
    }
    return v;
}

string Consoantes(string s) {
    string v;
    for(int i = 0; i < s.size(); i++) {
        switch (s[i]){
            case 'a':
                break;
            
            case 'A':
                break;
            case 'e':
                break;
            
            case 'E':
                break;
            case 'i':
                break;
            
            case 'I':
                break;

            case 'o':
                break;
            
            case 'O':
                break;

            case 'u':
                break;
            
            case 'U':
                break;
                
            default:
                v += s[i];
                break;
        }
    }
    return v;
}

int main() {
    string s;
    getline(cin, s);

    cout << "Vogais: " << Vogais(s)<< endl;
    cout << "Consoantes: " << Consoantes(s) << endl;
}