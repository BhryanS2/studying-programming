#include <bits/stdc++.h>
using namespace std;

struct Data
{
  int dia;
  int mes;
  int ano;
};

bool isValid(Data a)
{
  int ano = a.ano, mes = a.mes, dia = a.dia;
  int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (dia <= 0 && dia > 31)
    return false;
  if (mes <= 0 || mes >= 13)
    return false;
  if (ano % 4 == 0)
  {
    if (mes == 2 && dia == 29)
      return true;
    else if (dia > dias[mes])
      return false;
  }
  if (dia > dias[mes])
    return false;
  return true;
}

Data maiorData(Data a, Data b) {
  if(a.ano == b.ano && a.mes == b.mes && a.dia == b.dia) return a;
  if(a.ano > b.ano) return a;
  else if (b.ano > a.ano) return b;
  else if (a.mes > b.mes) return a;
  else if (a.mes < b.mes) return b;
  else if (a.dia > b.dia) return a;
  return b;
}

int main()
{
  Data a, b;
  cout << "Entre com data A:" << endl;
  cin >> a.ano >> a.mes >> a.dia;
  cin >> b.ano >> b.mes >> b.dia;
  cout << "A eh " << (isValid(a) ? "Valida" : "invalida") << endl;
  cout << "B eh " << (isValid(b) ? "Valida" : "invalida") << endl;
  Data maior = maiorData(a, b);
  cout << "A maior data eh: " << maior.ano<< "/" << maior.mes << "/" << maior.dia << endl;
}
