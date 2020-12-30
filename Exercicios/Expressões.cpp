#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
	string S;
	stack<char> pilha;
	bool ok = true;

    cin >> n;
    for(int j = 0; j < n; j ++){
    	
        cin >> S;
        for(int i = 0; i < S.size(); i++){
        	
            if(S[i] == '{' or S[i] == '[' or S[i] == '('){
                pilha.push(S[i]);
            }else if(S[i] == '}' or S[i] == ']' or S[i] == ')'){

                if(pilha.empty()){
                    ok = false;
                    break;
                }else{
                    pilha.pop();
                    ok = true;
                }
            }
            
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
*/
