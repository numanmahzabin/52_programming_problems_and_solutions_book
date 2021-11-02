#include <stdio.h>
#include <string.h>
int main()
{
    int t, i, l;
    char str[1001];
    scanf("%d" , &t);
    while(t--)
    {
        scanf(" %[^\n]", str);
        l = strlen(str);
        for (i = l - 1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");   
    }
    return 0;
}