#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Entrada de dados
    int n, m, v[10006];
    cin >> n >> m;
    
    for (int i=0;i<=n;i++)
    {
        v[i] = 0;
    }
    
    for (int i=1;i<=n;i++)
    {
        cin >> v[i];
    }
    
    //Processamento
    for (int i=1;i<=n;i++)
    {
        if(min(v[i],m-v[i])>=v[i-1])
            v[i] = min(v[i],m-v[i]);
            
        else if(max(v[i],m-v[i])>=v[i-1])
            v[i] = max(v[i],m-v[i]);
        else
        {
            cout << "-1";
            return 0;
        }
    }
    
    //Saída de dados
    long long soma=0;
    for(int i=1;i<=n;i++)
    {
        soma += v[i];
    }
    cout << soma << endl;
    
    return 0;
}
