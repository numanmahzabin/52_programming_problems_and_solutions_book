#include <stdio.h>
int main()
{
    int t, i, count, start;
    char str[1000000];
    scanf("%d", &t);
    while(t--)
    {
        scanf(" %[^\n]", str);
        count = 0, start = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= 48 && str[i] <= 57)
            {
                if(start == 0)
                {
                    start = 1;
                    count++;
                }
            }
            else
            {
                if(start == 1)
                {
                    start = 0;    
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}