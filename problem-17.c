#include <stdio.h>
int main()
{
    int t, count, i;
    char str[1002];
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        for (i = 0, count = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }
    return 0;
}