#include <stdio.h>
int main()
{
    int t, n[3], i, j, k, temp;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &n[0], &n[1], &n[2]);
        printf("Case %d:", i);

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                if (n[j] < n[k])
                {
                    temp = n[j];
                    n[j] = n[k];
                    n[k] = temp;
                }
            }
        }
        printf(" %d %d %d\n", n[0], n[1], n[2]);
    }

    return 0;
}