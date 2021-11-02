#include <stdio.h>
int main()
{
    int t, i, n, d, c;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        printf("Case %d:", i);
        for (c = 1; c <= n; c++)
        {
            if (n % c == 0)
            {
                printf(" %d", c);
            }
        }
        printf("\n");
    }
}