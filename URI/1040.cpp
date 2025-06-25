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
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  // 2, 3, 4 e 1
  double media = (a*2 + b * 3 + c * 4 + d * 1) / 10;
  printf("Media: %.1lf\n", media);
  if (media >= 7.0) {
    cout << "Aluno aprovado." << endl;
    return 0;
  } else if(media < 5.0) {
    cout << "Aluno reprovado." << endl;
    return 0;
  }
  cout << "Aluno em exame." << endl;

  double nota_rec;
  cin >> nota_rec;
  printf("Nota do exame: %.1lf\n", nota_rec);
  media = (media + nota_rec) / 2;
  if (media >= 5.0) cout << "Aluno aprovado." << endl;
  else cout << "Aluno reprovado." << endl;
  printf("Media final: %.1lf\n", media);




  return 0;
}


//g++ 1040.cpp -o exe; cat input.txt | ./exe
