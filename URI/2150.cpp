#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  while (true)
  {
    string s, frase;
    cin >> s;
    if (s.empty()) {
      break; // Se a string s estiver vazia, sai do loop
    }
    cin.ignore();
    if (getline(cin, frase), frase.empty()) {
      break; // Se a linha estiver vazia, sai do loop
    }
    // a ideia é separar os caractes de s e frase
    // colocar em uma estrutura que permita contar a quantidade de caracteres repetidos
    // e depois fazer uma soma com quantos caractes de s estão na frase
    map<char, int> s_map;
    for (char c : s) {
      s_map[c]++;
    }
    int count = 0;
    for (char c : frase) {
      if (s_map.find(c) != s_map.end()) {
        count += s_map[c];
      }
    }

    cout << count << endl;
    
  }
  

  return 0;
}


//g++ exe.cpp -o exe;cat input.txt | ./exe
