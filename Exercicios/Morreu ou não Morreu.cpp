#include <stdio.h>
#include <stdlib.h>

struct Personagem {
  char nome[50];
  int ataque;
  int defesa;
  int vida;
  int sobreviveu(int dano, int defesa, int vida) {
    return ((defesa + vida) - dano >= 0);
  }
};

int main() {
  Personagem personagem;

  int dano;

  scanf("%s", &personagem.nome);
  scanf("%d", &personagem.ataque);
  scanf("%d", &personagem.defesa);
  scanf("%d", &personagem.vida);

  scanf("%d", &dano);

  if (personagem.sobreviveu(dano, personagem.defesa, personagem.vida))
    printf("%s sobreviveu!!!", personagem.nome);

  else
    printf("%s morreu :(", personagem.nome);

}

