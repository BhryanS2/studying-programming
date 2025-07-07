#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--)
  {
    int count = 0;
    string a, b;
    cin >> a >> b;
    if (a == b) {
      cout << 0 << endl;
      continue;
    }
    // a = "ab", b = "bd"
    // ab -> bb -> bc -> bd
    // abcdefghiz aaaaaaaaaa
    // abcdefghiz -> accdefghiz -> ad.. -> ae ... az -> aa..
    // calcular quantidade minima de passos
    while (a != b) {
      // encontrar o primeiro caracter diferente
      int i = 0;
      while (i < a.size() && i < b.size() && a[i] == b[i]) {
        i++;
      }
      if (i < a.size() && i < b.size()) {
        // se chegamos aqui, significa que temos caracteres diferentes
        // vamos incrementar o caracter de a até que ele seja igual ao de b
        while (a[i] != b[i]) {
          a[i]++;
          count++;
          if (a[i] > 'z') {
            a[i] = 'a'; // se chegou em 'z', volta para 'a'
          }
        }
      } else if (i < a.size()) {
        // se chegamos aqui, significa que b é prefixo de a
        // sendo a = "abce", b = "ab"
        // count += 4 - 2 = 2
        count += (int)a.size() - i;
        break;
      } else if (i < b.size()) {
        // se chegamos aqui, significa que a é prefixo de b
        count += (int)b.size() - i;
        break;
      }
    }
    cout << count << endl;
  }
  
}