#include <stdio.h>
int main()
{
    int t, i, j, k;
    char str[1001], reverse[1001];
    scanf("%d", &t);
    while(t--)
    {
        scanf(" %[^\n]", str);
        for (i = 0, j = 0; str[i] != '\0'; i++, j++)
        {
            if(str[i] == 32)
            {
                for (k = j - 1; k >= 0; k--)
                {
                    printf("%c", reverse[k]);
                }
                j = -1;
                printf(" ");
                continue;
            }
            reverse[j] = str[i];
        }
        for (k = j - 1; k >= 0; k--)
        {
             printf("%c", reverse[k]);
        }

        printf("\n");
    }
    return 0;
}