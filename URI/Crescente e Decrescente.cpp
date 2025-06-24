#include <bits/stdc++.h>
int main()
{
    int x, y;
    while (true)
    {
        scanf("%d %d", &x, &y);
        if (x == y)
            break;
        else
        {
            x < y ? printf("Crescente\n") : printf("Decrescente\n");
        }
    }
}