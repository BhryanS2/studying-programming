#include <bits/stdc++.h>

#define MAX 105
using namespace std;

int grande_premio, pilotos, sistema_pontuacao, k, classificacao[MAX], pontos[MAX], posicao_corrida[MAX][MAX];

int main(){
    while(cin>> grande_premio >> pilotos && grande_premio + pilotos){
        for (int i = 1; i <= grande_premio; ++i)
        for (int j = 1; j <= pilotos; ++j)
            cin>> posicao_corrida[i][j];//leio as posicoes da corrida de cada piloto
        
        cin>> sistema_pontuacao;//leio o sistema de pontuacao
        while(sistema_pontuacao--){//ele roda ate acabar o numero de sistemas de pontuacao
        
            //Aqui abaixo inicio o vetor de pontos e o da classificacao tudo com zero
            memset(pontos, 0, sizeof(pontos));
            memset(classificacao, 0, sizeof(classificacao));
            
            cin>> k;//leio k
            for (int i = 1; i <= k; i++)
                cin>> pontos[i];//leio os pontos do 1 lugar,2 lugar, ... etc

            for (int i = 1; i <= grande_premio; ++i)
            for (int j = 1; j <= pilotos; ++j)
            /*
            2 4
            1 3 4 2    -> Vou tomar por base essa entrada 
            4 1 3 2
            2
            3 3 2 1
            3 5 4 2
            */
            //Aqui gero a tabela de classificados de cada piloto
            //O vetor classificacao[] ele ta todo zerado
            //Ex.: 
            //posicao_corrida[linha][coluna] -> posicao_corrida[1][1] é 1...
            //classificacao[1] = classificacao[1] + pontos[ posicao_corrida[1][1] ]
            //classificacao[1] = classificacao[1] + pontos[ 1 ]
            //[3 2 1] -> tabela de pontuacao, 3 esta no indice 1...
            // 0 = 0 + 3 -> classificacao[1] = 3
            //So repetir isso pra todos
            classificacao[j]= classificacao[j] + pontos[ posicao_corrida[i][j] ];
        
            int maior_pontuacao = 0;//crio uma variavel pra comparar qual a maior pontuacao
            //porque ele quer saber quem teve maior pontuacao da corrida pra saber quem ganhou
            for (int j = 1; j <= pilotos; ++j)
                //acho a maior pontuacao e atribuo a maior_pontuacao
                if(classificacao[j] > maior_pontuacao) maior_pontuacao = classificacao[j];;

            //comparo se os classificado tiveram a melhor pontuacao
            //se tiveram a mesma pontuacao eu mostro o piloto
            for (int i = 1; i <= pilotos; ++i)
                if(classificacao[i] == maior_pontuacao) 
                    cout<< i <<" ";
            cout<<endl;
        }
    }
    return 0;
}
