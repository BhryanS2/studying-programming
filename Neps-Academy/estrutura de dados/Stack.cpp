/*
Stack
https://neps.academy/br/course/10/lesson/255
*/
#include <bits/stdc++.h>
using namespace std;

/*
stack representa uma pilha.
um conjunto de objetos agrupados um acima do outro,
onde você tem três operações principais:
adicionar algo ao topo da pilha,
olhar o objeto que está no topo da pilha
remover o objeto no topo da pilha.

Para adicionar um elemento na pilha utilizamos o comando push,
podemos acessar apenas o elemento que está no topo da pilha e para isso usamos o método top.
para remover o elemento que está no topo da pilha, utilizamos o comando pop
Outro método bastante usado é o empty, retorn true ou false

*/

void test1() {
    int op, x;
    stack<int> pilha; //Cria uma variável stack que armazena inteiros
    cout << "1 X: adicionar o elemento X no topo da pilha.\n";

    cout << "2: remover o elemento no topo da pilha, caso tenha algum elemento.\n";

    cout << "3: imprimir o elemento no topo da pilha, caso a pilha esteja vazia, imprimir “-1”.\n";

    cout << "0: finalizar o programa.\n";

    while (cin >> op) {
        if (op == 0) break; //finaliza programa;

        if (op == 1) {//adiciona elemento na pilha
            cin >> x;
            pilha.push(x);
        }
        else if (op == 2) if (!pilha.empty()) pilha.pop();
        //remover elemento da pilha
        else if (op == 3) //topo da pilha
            cout << (pilha.empty() ? -1 : pilha.top()) << endl;

    }
}

void parenteses() {
    string expressao;
    stack<char> pilha;
    bool ok = true;
    //Usamos a ideia de que a expressão é válida, até que se prove o contrário

    getline(cin, expressao);

    for (int i = 0; i < expressao.size(); i++) {
        //Passamos por cada caractere da expressão
        if (expressao[i] == '(') pilha.push('(');
        //Se achamos um parêntese abrindo, adicionamos ele na pilha
        else if (expressao[i] == ')'){
        //Se achamos um parêntese fechando, verificamos se o topo dapilha tem um parêntese abrindo
            if (pilha.empty()) {
                //Se a pilha é vazia, a expressão é inválida
                ok = false;
                break;
            } else pilha.pop();//Caso exista um parêntese abrindo no topo da pilha, removemos ele.
        }
    }
    ok = pilha.empty() ? true : false;
    cout << (ok ? "Valida" : "Invalida") << endl;
}

int main() {
    parenteses();
    test1();
}
