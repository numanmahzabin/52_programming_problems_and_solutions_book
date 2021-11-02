#include <stdio.h>
int main()
{
    int t, count, i;
    char str[10001];
    scanf("%d", &t);
    while(t--)
    {
        count = 0;
        scanf(" %[^\n]", str);
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ')
            {
                count++;
            }
        }
        printf("Count = %d\n", count + 1);
    }
    return 0;
}