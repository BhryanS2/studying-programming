#include <bits/stdc++.h>
#include <string.h>

int CPF(int cpf[9], int verificadores[2]) {
  int soma1 = 0, soma2 = 0, i = 0, aux1 = 1, aux2 = 9;

  for (i = 0; i < 9; i++) {
    soma1 += (cpf[i] * aux1);
    soma2 += (cpf[i] * aux2);

    aux1++;
    aux2--;
  }

  if (soma1 % 11 == 10) if (verificadores[0] != 0) return 0;
  else if (verificadores[0] != (soma1 % 11)) return 0;


  if (soma2 % 11 == 10) if (verificadores[1] != 0) return 0;
  else if (verificadores[1] != (soma2 % 11)) return 0;


  return 1;
}

int CharToInt(char algarismo) {
  switch (algarismo) {
  case '0': return 0;
  case '1': return 1;
  case '2': return 2;
  case '3': return 3;
  case '4': return 4;
  case '5': return 5;
  case '6': return 6;
  case '7': return 7;
  case '8': return 8;
  case '9': return 9;
  }
}

char keyboard[BUFSIZ];

int main() {
  int cpf[9], verificadores[2];
  char cpf_string[15];

  memset(cpf, 0, sizeof(cpf));
  memset(verificadores, 0, sizeof(verificadores));

  while (scanf("%s", cpf_string) != EOF) {
    setbuf(stdin, keyboard);
    cpf[0] = CharToInt(cpf_string[0]);
    cpf[1] = CharToInt(cpf_string[1]);
    cpf[2] = CharToInt(cpf_string[2]);

    cpf[3] = CharToInt(cpf_string[4]);
    cpf[4] = CharToInt(cpf_string[5]);
    cpf[5] = CharToInt(cpf_string[6]);

    cpf[6] = CharToInt(cpf_string[8]);
    cpf[7] = CharToInt(cpf_string[9]);
    cpf[8] = CharToInt(cpf_string[10]);

    verificadores[0] = CharToInt(cpf_string[12]);
    verificadores[1] = CharToInt(cpf_string[13]);

    if (CPF(cpf, verificadores)) printf("CPF valido\n");
    else printf("CPF invalido\n");

  }

  return 0;
}
