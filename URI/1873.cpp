#include <bits/stdc++.h>
using namespace std;
// Tesoura corta papel
// Papel cobre pedra
// Pedra derruba lagarto
// Lagarto adormece Spock
// Spock derrete tesoura
// Tesoura prende lagarto
// Lagarto come papel
// Papel refuta Spock
// Spock vaporiza pedra
// Pedra quebra tesoura
bool ganha(string raj, string sheldon) {
  if (raj == "tesoura") {
    if (sheldon == "papel") {
      return true;
    }
    if (sheldon == "lagarto") {
      return true;
    }
  }
  if (raj == "papel") {
    if (sheldon == "pedra") {
      return true;
    }
    if (sheldon == "spock") {
      return true;
    }
  }
  if (raj == "pedra") {
    if (sheldon == "lagarto") {
      return true;
    }
    if (sheldon == "tesoura") {
      return true;
    }
  }
  if (raj == "lagarto") {
    if (sheldon == "spock") {
      return true;
    }
    if (sheldon == "papel") {
      return true;
    }
  }
  if (raj == "spock") {
    if (sheldon == "tesoura") {
      return true;
    }
    if (sheldon == "pedra") {
      return true;
    }
  }
  return false;
}


int main() {
  // Tesoura corta papel
  // Papel cobre pedra
  // Pedra derruba lagarto
  // Lagarto adormece Spock
  // Spock derrete tesoura
  // Tesoura prende lagarto
  // Lagarto come papel
  // Papel refuta Spock
  // Spock vaporiza pedra
  // Pedra quebra tesoura

  int n;
  cin >> n;
  string raj, sheldon;

  for (int i = 0; i < n; i++)
  {
    cin >> raj >> sheldon;
    if (raj == sheldon) {
      cout << "empate" << endl;
      continue;
    }
    if (ganha(raj, sheldon)) {
      cout << "rajesh" << endl;
    }
    else {
      cout << "sheldon" << endl;
    }
  }
  
  
}