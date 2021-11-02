#include <stdio.h>
int main()
{
    int t, i;
    char str[101];
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        for (i = 0; str[i] != '\0'; i++)
        {
            printf("%d", str[i] - 64);
        }
        printf("\n");
    }
    return 0;
}