/*
Pandemia
Fonte: OBI 2020 - Primeira Fase - A
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 1010

int participante[MAX];
bool infectados[MAX];

int main() {
  int TotalDeAmigos, TotalDeReunioes;
  cin >> TotalDeAmigos >> TotalDeReunioes;

  int AmigoInfectado, ReuniaoInfectado;
  cin >> AmigoInfectado >> ReuniaoInfectado;

  for (int i = 1; i <= TotalDeReunioes; i++) {

    if (i == ReuniaoInfectado) {
      infectados[AmigoInfectado] = true;
    }

    int QuantosParticipam;
    cin >> QuantosParticipam;

    bool TemInfectado = false;
    for (int j = 0; j < QuantosParticipam; j++) {
      cin >> participante[j];
      if (infectados[participante[j]]) {
        TemInfectado = true;
      }
    }

    if (TemInfectado) {
      for (int j = 0; j < QuantosParticipam; j++) {
        infectados[participante[j]] = true;
      }
    }
  }

  int total = 0;
  for (int i = 1; i <= TotalDeAmigos; i++) {
    if(infectados[i]) {
      total++;
    }
  }

  cout << total << endl;
}

//g++ pandemia.cpp -o pandemia.exe && pandemia.exe < input.txt

/*
*/
