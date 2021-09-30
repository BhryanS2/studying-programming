#include <iostream>

#define MAXN 100100

using namespace std;

int n, k;

int pai[MAXN], peso[MAXN], qtd[MAXN];

// funções do Union-Find
/*
int find(int x){

    if(pai[x]==x) return x;
    return find(pai[x]);
}
*/

// função find otimizada
int find(int x) {

    // se x for o patriarca, retorne x
    if (pai[x] == x) {
        return x;
    }

    // se não, retorne o valor do patriarca de seu pai
    return pai[x] = find(pai[x]); // mas lembre-se de salvá-lo em pai[x]
}

//juntar pai ao filho
/*
void join(int x, int y){

    pai[find(x)]=find(y);
}
*/
/*
// função join otimizada
void join(int x, int y) { // ela recebe os elementos a serem unidos

    // como só vamos unis os patriaarcas só precisamos trabalhar com eles
    // e fazemos caa um dos elementos receber o valor de sue patriarca
    x = find(x);
    y = find(y);

    // agora x e y são os patriarcas dos conjuntos que desejamos unir

    // se eles forem o mesmo patriarca
    if (x == y) {
        return; // então os conjuntos já estão unidos e retornamos
    }

    // se um dos dois patriarcas tiver peso menor, faço ele ser filho do outro
    if (peso[x] < peso[y]) {
        pai[x] = y;
    }
    if (peso[x] > peso[y]) {
        pai[y] = x;
    }

    // se os dois tiverem o mesmo peso
    if (peso[x] == peso[y]) {

        // escolho um para ser o novo patriarca
        pai[x] = y;

        // e guardo que seu peso aumentará um uma unidade
        peso[y]++;
    }
}
*/
// função join otimizada que atualiza o tamanho dos conjuntos
void join(int x, int y){ // ela recebe os elementos a serem unidos

    // como só vamos unis os patriaarcas só precisamos trabalhar com eles
    // e fazemos caa um dos elementos receber o valor de sue patriarca
    x=find(x);
    y=find(y);

    // agora x e y são os patriarcas dos conjuntos que desejamos unir

    // se eles forem o mesmo patriarca
    if(x==y){
        return; // então os conjuntos já estão unidos e retornamos
    }

    // se o patriarca x tiver peso menor que o patriarca y
    if(peso[x]<peso[y]){
         pai[x]=y; // faço x ser filho do y
         qtd[y]+=qtd[x]; // e atualizo o número de descendentes de y
    }

    // se o patriarca y tiver peso menor que o patriarca x
    if(peso[x]>peso[y]){

         pai[y]=x; // faço y ser filho de x
         qtd[x]+=qtd[y]; // e a tualizo o número de descendentes de x
    }

    // se os dois tiverem o mesmo peso
    if(peso[x]==peso[y]){

        // escolho um para ser o novo patriarca
        pai[x]=y;

        // e guardo que seu peso aumentará um uma unidade
        peso[y]++;

        // e atualizo o seu número de descendentes
        qtd[y]+=qtd[x];
    }
}

int main() {
    // essa solução daria TLE
    // leio os valores de n e k
    /*cin>>n>>k;

    // inicializo todos os bancos como pais de si mesmos
    for(int i=1; i<=n; i++){
        pai[i]=i;
    }

    char op;
    int banco1, banco2;

    // para cada operação a ser realizada
    for(int i=1; i<=k; i++){

        // leio o tipo de operação e os bancos envolvidos
        cin>>op>>banco1>>banco2;

        // se a operação for a de fusão
        if(op=='F'){
            join(banco1, banco2); // realizo a união dos conjuntos
        }

        // se não for, é uma consulta
        else{
            // se os bancos estiverem no mesmo conjunto
            if(find(banco1)==find(banco2)){
                cout<<"S\n"; // imprimo 'S'
            }
            else{ // se não, imprimo 'N'
                cout<<"N\n";
            }
        }
    }
*/
//para melhorar o código vamos otimizar o metodo find, pois tudo que fazemos precisa dele
//podemos usar um princípio de Programação Dinâmica: evitar o recálculo!
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        pai[i] = i;
    }

    char op;
    int banco1, banco2;

    for (int i = 1; i <= k; i++) {

        cin >> op >> banco1 >> banco2;
        if (op == 'F') {
            join(banco1, banco2);
        }
        else {
            if (find(banco1) == find(banco2)) {
                cout << "S\n";
            }
            else {
                cout << "N\n";
            }
        }
    }
    return 0;
}
