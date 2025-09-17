#include <stdio.h>
#include <stdlib.h>

int ventilador_equerdo(char linha[], int p, int* y) {
  for (int i = 0; i < p; i++) {
    if (linha[i] != '0') {
      *y = i;
      return linha[i] - '0';
    }
  }
  return 0;
}

int ventilador_direito(char linha[], int p, int n, int* y) {
  for (int i = p - 1; i < n; i++) {
    if (linha[i] != '0') {
      *y = i;
      return linha[i] - '0';
    }
  }
  return 0;
}

int main() {
  int m, n, p, x = 0, y = 0;
  int y_ventidor_eq = 0, y_ventidor_dir = 0;

  while (scanf("%d %d %d", &m, &n, &p) && m != 0 && n != 0 && p != 0) {
    y = p - 1;
    x = 0;

    char** matriz = (char**)calloc(m, sizeof(char*));
    for (int i = 0; i < m; i++)
      matriz[i] = (char*)calloc(n, sizeof(char));

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        scanf(" %c", &matriz[i][j]);
      }
    }

    int estourou = 0;

    for (int i = 0; i < m; i++) {
      int ventilador_eq = ventilador_equerdo(matriz[i], p, &y_ventidor_eq);
      int ventilador_dir = ventilador_direito(matriz[i], p, n, &y_ventidor_dir);
      int direcao_vento = ventilador_eq - ventilador_dir;
      y += direcao_vento;
      int passos = abs(direcao_vento);
      matriz[i][y] = '*'; 
      for (int j = 1; j <= passos; j++) {
        if (direcao_vento > 0) {
          matriz[i][y - j] = '*';
        } else if (direcao_vento < 0) {
          matriz[i][y + j] = '*';
        }
      }

      

      if (y < 0 || y >= n || y == y_ventidor_dir || y == y_ventidor_eq) {
        estourou = 1;
        x = i + 1;
        break;
      }
    }

    if (estourou) {
      printf("BOOM %d %d\n", x, y + 1);
      matriz[x - 1][y] = 'X';
    }
    else {
      printf("OUT %d\n", y + 1);
    }
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        printf("%c ", matriz[i][j]);
      }
      printf("\n");
    }
  }
}
