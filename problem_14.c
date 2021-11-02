#include <stdio.h>
int main()
{
    int t, count, i;
    char str[10001], ch;
    scanf("%d", &t);
    while(t--)
    {
        count = 0;
        scanf(" %[^\n]", str);
        scanf(" %c", &ch);
        for (i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == ch)
            {
                count++;
            }
        }
        if (count != 0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", ch, str, count);
        }
        else
        {
            printf("'%c' is not present\n", ch);
        }
    }
    return 0;
}