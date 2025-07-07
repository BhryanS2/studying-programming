#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void task(){
    ll n, k;
    scanf("%lld%lld", &n, &k);
    vector<ll> divisores;
    // para achar todos os divisores de n
    // vamos iterar de 1 até a raiz quadrada de n
    for(ll i = 1LL; i * i <= n; i++){
        if(n % i == 0){
            // se i é divisor de n, então n / i também é divisor
            // pense que n = 12, então 1 e 12 são divisores, 2 e 6 também, e 3 e 4 também
            divisores.push_back(i);
            // caso seja um quadrado perfeito, como 36, ao chegar em i = 6, n / i também é 6
            // então não adicionamos novamente
            if(n / i != i) divisores.push_back(n / i);
        }
    }

    sort(divisores.begin(), divisores.end());

    ll f = divisores.size() > 1 ? divisores[1] : divisores[0];
    // f é o segundo menor divisor de n, ou o menor se n for primo
    // por exemplo, se n = 12, f = 2, se n = 13, f = 13

    deque<ll> aux;
    // deque é uma estrutura de dados que permite inserção e remoção de elementos em ambas as extremidadess
    for(ll v : divisores){
        //printf("%lld ", v);
        // se o resto da divisão de f por 2 for igual ao resto da divisão de v por 2
        // significa que ambos são pares ou ambos são ímpares
        // por exemplo, se f = 2 e v = 4, ambos são pares, se f = 3 e v = 5, ambos são ímpares
        // isso é importante para manter a paridade dos números
        // se f = 2 e v = 3, não adicionamos 3, pois queremos manter a paridade
        // Paridade é: par ou ímpar
        if(f % 2 == v % 2) aux.push_back(v);
    }

    //printf("\n");
    // Vamos usar da deque para manter a ordem dos divisores
    // e também para facilitar a inserção de elementos no início e no final
    // Se o primeiro elemento da deque não for 1, adicionamos 1 no início
    if(aux.front() != 1LL) aux.push_front(1LL);

    ll val = 1;

    int ts = aux.size();
    // ts é o tamanho da deque, ou seja, a quantidade de divisores que restaram
    printf("ts = %d\n", ts);
    printf("aux: ");
    for(int i=0;i<ts;i++) printf("%lld ", aux[i]);
    printf("\n");
    // Agora vamos iterar sobre os divisores restantes
    // e calcular o valor final
    for(int i=0;i<ts-1;i++){
        // aux[i] é o divisor atual
        // aux[i+1] é o próximo divisor
        // dif é a diferença entre o próximo divisor e o divisor atual
        // se a diferença não for múltipla do divisor atual, significa que não podemos pular para o próximo divisor
        // então mantemos o próximo divisor igual ao divisor atual
        // por exemplo, se aux[i] = 2 e aux[i+1] = 5, dif = 3, não podemos pular para 5
        // então mantemos aux[i+1] = 2
        // se aux[i] = 2 e aux[i+1] = 4, dif = 2, podemos pular para 4
        ll dif = aux[i+1] - aux[i];
        printf("i = %d, aux[i] = %lld, aux[i+1] = %lld, dif = %lld\n", i, aux[i], aux[i+1], dif);

        // se a diferença não for múltipla do divisor atual, não podemos pular para o próximo divisor
        // então mantemos o próximo divisor igual ao divisor atual
        if(dif % aux[i] != 0){
            printf("dif %lld nao eh multiplo de aux[%d] = %lld, mantendo aux[%d] = %lld\n", dif, i, aux[i], i + 1, aux[i]);
            // Nesse caso, não podemos pular para o próximo divisor
            // então mantemos o próximo divisor igual ao divisor atual
            // e continuamos o loop
            if(i + 1 < ts){
                aux[i + 1] = aux[i];
            }
            continue;
        }

        // se a diferença for múltipla do divisor atual, podemos pular para o próximo divisor
        // saltos é a quantidade de vezes que podemos pular para o próximo divisor
        // por exemplo, se aux[i] = 2 e aux[i+1] = 4, dif = 2, saltos = 1
        // se aux[i] = 2 e aux[i+1] = 6, dif = 4, saltos = 2
        ll saltos = dif / aux[i];
        //printf("saltos = %lld\n", saltos);
        // K é a quantidade de vezes que podemos pular para o próximo divisor
        // se k for maior ou igual a saltos, significa que podemos pular para o próximo divisor
        // e subtrair saltos de k
        // por exemplo, se k = 3 e saltos = 2, podemos pular para o próximo divisor e subtrair 2 de k
        // se k for menor que saltos, significa que não podemos pular para o próximo divisor
        // então adicionamos aux[i] * k ao valor final
        if(k >= saltos) k -= saltos, val = aux[i+1];
        else{
            val += (aux[i] * k);
            k = 0;
        }
        printf("k = %lld, val = %lld\n", k, val);
    }

    //printf("%lld %lld\n", val, k);

    if(k >= 1) val += (k * val);

    printf("%lld\n", val);
}

int main(){
    int t = 1;
    //scanf("%d",&t);
    while(t--){
        task();
    }
    return 0;
}
