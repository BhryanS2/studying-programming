#include <bits/stdc++.h>
#define MAX 200

int main() {
  char senha[MAX];
  int fraca, tamanho, i, MinMauiscula, MinLetra, MinNum;

  while (fgets(senha, MAX, stdin) != NULL) {
    for (i = 0; senha[i] >= ' '; i++);
    senha[i] = '\0';
    tamanho = strlen(senha);
    if (tamanho >= 6 && tamanho <= 32) {
      for (i = 0, fraca = 0, MinMauiscula = 0, MinLetra = 0, MinNum; i < tamanho; i++) {
        if (senha[i] >= 'a' && senha[i] <= 'z') MinLetra = 1;
        else if (senha[i] >= 'A' && senha[i] <= 'Z') MinMauiscula = 1;
        else if (senha[i] >= '0' && senha[i] <= '9') MinNum = 1;
        else {
          fraca = 1;
          break;
        }
      }
      if (fraca || !MinLetra || !MinMauiscula || !MinNum) printf("Senha invalida.\n");
      else printf("Senha valida.\n");
    }
    else printf("Senha invalida.\n");
  }

  return 0;
}
