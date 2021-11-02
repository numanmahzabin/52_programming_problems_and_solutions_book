#include <stdio.h>
#include <string.h>
int main()
{
    int t, l;
    char num[6];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", num);
        l = strlen(num);
        printf("Sum = %d\n", (int)num[0] - 48 + (int)num[l - 1] - 48);
    }
    return 0;
}