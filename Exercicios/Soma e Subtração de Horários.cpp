/*
Soma e Subtração de Horários
https://neps.academy/br/exercise/739
*/
#include <bits/stdc++.h>
using namespace std;

int hora, minutos, segundos;
int horas_op, minutos_op, segundos_op;
int horas_res, minuto_res, segundos_res;
char op;

void soma() {
  horas_res = hora + horas_op;
  minuto_res = minutos_op + minutos;
  segundos_res = segundos_op + segundos;

  if(segundos_res >= 60) {
    minuto_res += segundos_res / 60;
    segundos_res %= 60;
  }

  if(minuto_res >= 60) {
    horas_res += minuto_res / 60;
    minuto_res %= 60;
  }

  if(horas_res >= 24) horas_res %= 24;
}

void subtracao() {
  horas_res = hora - horas_op;
  minuto_res = minutos - minutos_op;
  segundos_res = segundos - segundos_op;

  if(segundos_res < 0) {
    minuto_res -= 1;
    segundos_res += 60;
  }

  if(minuto_res < 0) {
    horas_res -= 1;
    minuto_res += 60;
  }

  if(horas_res < 0) horas_res += 24;
}

int main() {

  scanf("%d:%d:%d", &hora, &minutos, &segundos);
  scanf("%d:%d:%d", &horas_op, &minutos_op, &segundos_op);
  scanf("%s", &op);

  if (op == 'A') soma();
  else subtracao();

  printf("%02d:%02d:%02d\n", horas_res, minuto_res, segundos_res);
}
