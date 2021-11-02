#include <stdio.h>
int main()
{
    int t, n, i, j;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("*");
            }

            printf("\n");
        }
        if (t != 0)
        {
            printf("\n");
        }
    }
    return 0;
}