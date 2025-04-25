/*

*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  // se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
  // se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
  // se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
  // se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
  // se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
  // se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

  double a, b, c;
  cin >> a >> b >> c;
  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b);

  if (c >= a + b) {
    cout << "NAO FORMA TRIANGULO" << endl;
    return 0;
  }
  // classificação quannto aos angulos
  if (pow(c, 2) == pow(a, 2) + pow(b, 2)) cout << "TRIANGULO RETANGULO" << endl;
  else if (pow(c, 2) > pow(a, 2) + pow(b, 2)) cout << "TRIANGULO OBTUSANGULO" << endl;
  else if (pow(c, 2) < pow(a, 2) + pow(b, 2)) cout << "TRIANGULO ACUTANGULO" << endl;
  // classificação quanto aos lados
  if (a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
  else if (a == b || b == c || c == a) cout << "TRIANGULO ISOSCELES" << endl;


  return 0;
}


//g++ 1045.cpp -o exe; cat input.txt | ./exe
