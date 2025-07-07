#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int quantidade_elementos;
  cin >> quantidade_elementos;

  vector<int> elementos(quantidade_elementos);
  for (int i = 0; i < quantidade_elementos; ++i) {
    cin >> elementos[i];
  }

  int quantidade_consultas;
  cin >> quantidade_consultas;
  vector<int> consultas(quantidade_consultas);
  for (int i = 0; i < quantidade_consultas; ++i) {
    cin >> consultas[i];
  }

  unordered_map<int, vector<pair<int, int>>> soma_pares;
  for (int i = 0; i < quantidade_elementos; ++i) {
    for (int j = i + 1; j < quantidade_elementos; ++j) {
      int soma = elementos[i] + elementos[j];
      soma_pares[soma].push_back(make_pair(i, j));
    }
  }

  for (int idx_consulta = 0; idx_consulta < quantidade_consultas; ++idx_consulta) {
    int consulta = consultas[idx_consulta];
    ll quantidade = 0;
    unordered_set<string> usados;

    for (unordered_map<int, vector<pair<int, int>>>::iterator it1 = soma_pares.begin(); it1 != soma_pares.end(); ++it1) {
      int soma1 = it1->first;
      int soma2 = consulta - soma1;
      if (soma_pares.find(soma2) == soma_pares.end()) continue;
      vector<pair<int, int>> pares1 = it1->second;
      vector<pair<int, int>> pares2 = soma_pares[soma2];

      for (size_t i = 0; i < pares1.size(); ++i) {
        int i1 = pares1[i].first;
        int j1 = pares1[i].second;
        for (size_t j = 0; j < pares2.size(); ++j) {
          int i2 = pares2[j].first;
          int j2 = pares2[j].second;
          if (i1 != i2 && i1 != j2 && j1 != i2 && j1 != j2) {
            vector<int> indices;
            indices.push_back(i1);
            indices.push_back(j1);
            indices.push_back(i2);
            indices.push_back(j2);
            sort(indices.begin(), indices.end());
            string chave = to_string(indices[0]) + "," + to_string(indices[1]) + "," +
              to_string(indices[2]) + "," + to_string(indices[3]);
            if (usados.find(chave) == usados.end()) {
              usados.insert(chave);
              quantidade++;
            }
          }
        }
      }
    }
    cout << quantidade << '\n';
  }

  return 0;
}