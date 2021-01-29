/*
Fonte: Maratona de Programação da SBC 2017
Sequencia Completa de Naebbirac
https://neps.academy/br/exercise/98
*/

#include <bits/stdc++.h>
using namespace std;

int n, k;
int elofordulas[10005];
int eger;


int main() {

  cin >> k >> n;

  set<int> insert;

  for (int i = 0; i < n; i++) {
    cin >> eger;
    elofordulas[eger - 1]++;
  }

  for (int i = 0; i < k; i++) {
    insert.insert(elofordulas[i]);
  }

  if (insert.size() > 3) {
    cout << "*" << endl;
  }

  if (insert.size() == 2) {

    int minimim = 100000;
    int maximim = -1;

    for (int i = 0; i < k; i++) {
      minimim = min(minimim, elofordulas[i]);
      maximim = max(maximim, elofordulas[i]);
    }

    int max_c = 0;
    int min_c = 0;

    int max_index;
    int min_index;

    for (int i = 0; i < k; i++) {
      if (elofordulas[i] == maximim) {
        max_c++;
        max_index = i;
      }
      else {
        min_c++;
        min_index = i;
      }
    }

    if (maximim - minimim != 1) {
      cout << "*" << endl;
      return 0;
    }

    if (max_c == 1) {
      cout << "-" << max_index + 1 << endl;
    }
    else {
      cout << "+" << min_index + 1 << endl;
    }
  }

  if (insert.size() == 3) {
    int minimim = 100000;
    int maximim = -1;

    for (int i = 0; i < k; i++) {
      minimim = min(minimim, elofordulas[i]);
      maximim = max(maximim, elofordulas[i]);
    }

    int max_c = 0;
    int min_c = 0;

    int max_index;
    int min_index;

    for (int i = 0; i < k; i++) {
      if (elofordulas[i] == maximim) {
        max_c++;
        max_index = i;
      }
      else if (elofordulas[i] == minimim) {
        min_c++;
        min_index = i;
      }
    }

    if (maximim - minimim != 2) {
      cout << "*" << endl;
      return 0;
    }

    if (max_c == 1 && min_c == 1) {
      cout << "-" << max_index + 1 << " +" << min_index + 1 << endl;
    }
    else {
      cout << "*" << endl;
    }
  }
}
