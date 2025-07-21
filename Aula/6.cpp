#include <bits/stdc++.h>
using namespace std;

struct Data
{
  int dia;
  int mes;
  int ano;
};

struct Func {
  string nome, cargo;
  double salario;
  Data admissao;

  void aumento(double percent) {
    // é esperado que entre com valores tipo: 0.15 para 15%
    this->salario*= (1+percent);
  }
};

int main() {
  Func a;
  cout << "Entre com nome, cargo e salario do funcionario: " << endl;
  cin >> a.nome >> a.cargo >> a.salario;
  cout << "Entre com a data de admissao: ex (01/01/2001):"<<endl;
  scanf("%d/%d/%d", &a.admissao.dia, &a.admissao.mes, &a.admissao.ano);
  cout << "Quatos porcetos quer dar de aumento: ex 15% = 0.15" << endl;
  double r;
  cin >> r;
  cout << "O salario eh: " << a.aumento(r) << endl;
  return 0;
}

