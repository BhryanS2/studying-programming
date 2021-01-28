#include <iostream>
#include <stack>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
/*
find(incio, fim, elemento que quiero pesquisar);
*/
int main(){
    int n, cont = 0;
	string s;
	stack<char> pilha1, pilha2, pilha3;
	bool ok = true;

    cin >> n;//([{}])

    for(int j = 0; j < n; j ++){
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            cout << s[i] << endl;
            if(s[i] == '{' or s[i] == '[' or s[i] == '('){
                if(s[i] == '{') pilha1.push(s[i]);
                else s[i] == '[' ? pilha2.push(s[i]) : pilha3.push(s[i]);
            }else if(s[i] == '}' or s[i] == ']' or s[i] == ')'){
                if(s[i] == '}'){
                    if (pilha1.empty()) {
                        pilha1.pop();
                        ok = false;
                        break;
                    } else {
                        pilha1.pop();
                    }
                }else if(s[i] == ']'){
                    if (pilha2.empty()) {
                        ok = false;
                        break;
                    } else {
                        pilha2.pop();
                    }
                }else if(s[i] == ')') {
                    if (pilha3.empty()) {
                        ok = false;
                        break;
                    } else {
                        pilha3.pop();
                    }
                }
            }
        }
        if(!pilha1.empty()){
            pilha1.pop();
            ok = false;
        }
        if(!pilha2.empty()){
            pilha2.pop();
            ok = false;
        }
        if (!pilha3.empty()) {
            pilha3.pop();
            ok = false;
        }
        cout << (ok ? "S":"N") << endl;
    }
	return 0;
}

/*
6
() S
[] S
{} S
(] S
}{ N
([{}]) S
****
(((((((((({([])}])))))))))
(] () () () () () () () () () [] () {}
***
4
(]
}{
([{}])
{}()[]

*/
