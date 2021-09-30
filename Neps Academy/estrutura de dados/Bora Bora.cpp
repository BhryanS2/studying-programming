/*
https://neps.academy/br/exercise/270
Bora Bora
estrutura de dados
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Card {
  int number;
  char naipe;
};

struct Player {
  int id, Cartas_total;
  vector<Card>c;
};

int main() {
  int n, m, p;

  vector<Player> players;
  vector<Card> monte;

  while (cin >> p >> m >> n && p && m && n) {

    players.assign(p, { 0, m, vector<Card>() });
    monte.assign(n, { 0,'0' });

    // informações sobre o monte
    for (int i = 0; i < n; i++) cin >> monte[i].number >> monte[i].naipe;


    int topo = 0, pp = 1;
    // cartões m para p
    while (pp <= p) {
      players[pp - 1].id = pp;
      // cout << "Player: " << pp << endl;
      // cout << "Antes: no topo: " << topo << " - pp * m: " << pp * m << ", pp: " << pp << ", p * m: " << p * m << endl;
      if (topo < pp * m) players[pp - 1].c.push_back(monte[topo++]);
      else pp++;
    }

    /*
    for (int i = 0; i < p; i++) {
      cout << "Player  " << players[i].id << endl;
      for (int j = 0; j < players[i].c.size(); j++) {
        cout << players[i].c[j].naipe << " - " << players[i].c[j].number << ", ";
      }
      cout << endl;
    }
    */

    //cartão descartado
    Card descarte = monte[topo++];

    // sentido horário = 1, sentido anti-horário = -1
    int sentido = descarte.number == 12 ? -1 : 1, Quem_joga = 0, penalidade_do_jogador = 0;

    //onde o jogo começa
    while (true) {

      /*cout << "Player  " << players[Quem_joga].id << ", Player Penalty: " << penalidade_do_jogador + 1 << " - " << sentido << endl;

      for (int j = 0; j < players[Quem_joga].c.size(); j++) {
        cout << players[Quem_joga].c[j].naipe << " - " << players[Quem_joga].c[j].number << ", ";
      }

      cout << "\nPilha de descarte: " << descarte.naipe << " - " << descarte.number << endl;
      */

      bool discartado = false;
      // verificar regras para cartão discartado
      if (descarte.number == 7 && Quem_joga == penalidade_do_jogador) {
        // deve pegar duas cartas do monte
        if (topo < n) {
          players[Quem_joga].c.push_back(monte[topo++]);
          players[Quem_joga].Cartas_total += 1;
        }
        if (topo < n) {
          players[Quem_joga].c.push_back(monte[topo++]);
          players[Quem_joga].Cartas_total += 1;
        }
      }
      else if (descarte.number == 1 && Quem_joga == penalidade_do_jogador) {
        //deve pegar uma carta do monte
        if (topo < n) {
          players[Quem_joga].c.push_back(monte[topo++]);
          players[Quem_joga].Cartas_total += 1;
        }
      }
      else if ((descarte.number != 11 && Quem_joga == penalidade_do_jogador) || (Quem_joga != penalidade_do_jogador)) {
        //verifique qual pode ser discartado (mesmo naipe ou mesmo número)
        int posCard = -1, number = 0;
        char naipe = 'A';
        for (int i = 0; i < (int)players[Quem_joga].c.size(); i++) {
          if ((players[Quem_joga].c[i].number == descarte.number ||
            players[Quem_joga].c[i].naipe == descarte.naipe) &&
            (players[Quem_joga].c[i].naipe != '1' &&
              players[Quem_joga].c[i].number != 0)) {
            if (players[Quem_joga].c[i].number > number ||
              (players[Quem_joga].c[i].number == number && players[Quem_joga].c[i].naipe > naipe)) {
              number = players[Quem_joga].c[i].number;
              naipe = players[Quem_joga].c[i].naipe;
              posCard = i;
            }
          }
        }

        if (posCard != -1) {
          descarte = { players[Quem_joga].c[posCard].number, players[Quem_joga].c[posCard].naipe };
          // removendo carta
          players[Quem_joga].c[posCard] = { 0,'1' };
          players[Quem_joga].Cartas_total--;
          discartado = true;
        }

        if (!discartado) {
          if (topo < n) {
            // pegue mais um do monte
            if (monte[topo].number == descarte.number || monte[topo].naipe == descarte.naipe) {
              descarte = monte[topo];
              discartado = true;
            }
            else {
              players[Quem_joga].c.push_back(monte[topo]);
              players[Quem_joga].Cartas_total++;
            }
            //cout << "Player " << Quem_joga << " pegou " << monte[topo].number << " - " << monte[topo].naipe << endl << endl;
            topo++;
          }
        }
      }

      penalidade_do_jogador = -1;

      if (discartado && players[Quem_joga].Cartas_total == 0) {
        cout << players[Quem_joga].id << endl;
        break;
      }

      if (descarte.number == 12 && discartado) sentido = (sentido == -1) ? 1 : -1;

      int pr = Quem_joga;
      //passar para outro jogador
      Quem_joga += sentido;

      if (Quem_joga < 0) Quem_joga = p - 1;
      else if (Quem_joga >= p) Quem_joga = 0;


      if ((descarte.number == 1 || descarte.number == 7 || descarte.number == 11) && discartado)
        penalidade_do_jogador = Quem_joga; //indicando quem vai receber penalidade



      //cout << "\nPlayer " << pr + 1 << " descartou: " << descarte.naipe << " - " << descarte.number << "\n\n";
      //cout << "monte: \n";
      /*
      for (int i = topo; i < n; i++) {
        cout << monte[i].number << ", " << monte[i].naipe << endl;
      }
      cout << endl << endl;
      */
    }
  }
  return 0;
}
