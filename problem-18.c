#include <stdio.h>
int main()
{
    int i, t;
    char str[10001];
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
        for (i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))

            {
                if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != ' ')
                {
                    printf("%c", str[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}