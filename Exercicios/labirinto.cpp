#include <iostream>
#include <queue>
#include <string>
#include <algorithm> 
#include <vector>
#include <cmath> 
#include <iomanip>
#include <map>
#define INF 999999999
#define par pair<int, pair<int, int> >
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m, tab[55][55], ans, dist[55][55], ok;
priority_queue<par, vector<par>, greater<par> > fila;

int main()
{_
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> tab[i][j];
            dist[i][j] = INF;
        }
    }

    fila.push(make_pair(0, make_pair(1, 1)));
    dist[1][1] = 0;

    while (!fila.empty())
    {
        ok = 0;
        int turno = fila.top().first, a = fila.top().second.first, b = fila.top().second.second; fila.pop();

        if (a == n && b == m)
        {
            cout << turno << endl;
            return 0;
        }

        //cout << a << ' ' << b << endl;

        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (j && i) continue;
        
                if (dist[a + i][b + j] <= turno + 1) continue;
                if ((tab[a + i][b + j] + turno) % 10 <= ((tab[a][b] + turno) % 10) + 1)
                {
                    fila.push(make_pair(turno + 1, make_pair(a + i, b + j)));
                    dist[a + i][b + j] = turno + 1;
                }
            }
        }

        fila.push(make_pair(turno + 1, make_pair(a, b)));
    }
}

