#include<bits/stdc++.h>
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((b - a) < (c - b))
        printf("1");
    else if ((b - a) > (c - b))
        printf("-1");
    else
        printf("0");


    return 0;
}

