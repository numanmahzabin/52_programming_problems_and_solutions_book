#include <stdio.h>
int main()
{
    int t, n, i;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int ara[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        for (i = 0; i < n; i = i + 2)
        {
            if(i != 0)
            {
                printf(" ");
            }
            printf("%d", ara[i]);
        }
        printf("\n");
    }
    return 0;
}