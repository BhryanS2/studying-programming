
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string expressao;
    vector<char> parenteses, chaves, colchetes;
    bool okP, okCh, okCo;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> expressao;
        okP = true;
        okCh = true;
        okCo = true;

        for (int i = 0; i < expressao.size(); i++) {
            if (expressao[i] == '(' || expressao[i] == ')') {
                if (expressao[i] == '(') {
                    parenteses.push_back('(');
                    okP = false;
                } else if (expressao[i] == ')') {
                    if (parenteses.empty()) {
                        okP = false;
                        break;
                    } else {
                        parenteses.pop_back();
                        okP = true;
                    }
                }
            }

            else if (expressao[i] == '{' || expressao[i] == '}') {
                if (expressao[i] == '{') {
                    chaves.push_back('{');
                    okCh = false;
                }else if (expressao[i] == '}') {
                    if (chaves.empty()) {
                        okCh = false;
                        break;
                    } else {
                        chaves.pop_back();
                        okCh = true;
                    }

                }
            }

            else if (expressao[i] == '[' || expressao[i] == ']') {
                if (expressao[i] == '[') {
                    colchetes.push_back('[');
                    okCo = false;
                }else if (expressao[i] == ']') {
                    if (colchetes.empty()) {
                        okCo = false;
                        break;
                    } else {
                        colchetes.pop_back();
                        okCo = true;
                    }
                }
            }

        }

        if (!parenteses.empty() || !colchetes.empty() || !chaves.empty()) {
            if (!parenteses.empty()) parenteses.clear();
            if (!colchetes.empty()) colchetes.clear();
            if (!chaves.empty()) chaves.clear();
        }
        if(okCo && okP && okCh) cout << "S" << endl;
        else cout << "N" << endl;
    }
}
