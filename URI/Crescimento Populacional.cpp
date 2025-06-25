#include <bits/stdc++.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int pa, pb, tempo = 0;
        double g1, g2;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while (pa <= pb && tempo <= 100)
        {
            pa += (int)(pa * g1 / 100);
            pb += (int)(pb * g2 / 100);
            tempo++;
        }
        tempo > 100 ? printf("Mais de 1 seculo.\n") : printf("%d anos.\n", tempo);
    }
}