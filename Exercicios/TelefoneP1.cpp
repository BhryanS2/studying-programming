#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C'){
            s[i] = '2';
        }else if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F'){
            s[i] = '3';
        }else if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I'){
            s[i] = '4';
        }else if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L'){
            s[i] = '5';
        }else if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O'){
            s[i] = '6';
        }else if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S'){
            s[i] = '7';
        }else if(s[i] == 'T' || s[i] == 'U' || s[i] == 'V'){
            s[i] = '8';
        }else if(s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z'){
            s[i] = '9';
        }
    }
    cout << s << endl;
}


/*
A B C = 2
D E F = 3
G H I = 4
J K L = 5
M N O = 6
P Q R S = 7
T U V = 8
W X Y Z = 9
*/