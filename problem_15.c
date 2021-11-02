#include <stdio.h>
int main()
{
    int t;
    char str[1001];
    int letter[26], count, i;
    scanf("%d", &t);
    while(t--)
    {
        count = 0;
        scanf("%s", str);
        for (i = 0; i < 26; i++)
        {
            letter[i] = 0;
        }
        for (i = 0; str[i] != '\0'; i++)
        {
            letter[str[i] - 97]++;
        }
        for(i = 0; i < 26; i++)
        {
            if(letter[i] != 0)
            {
                printf("%c = %d\n", i + 97, letter[i]);
            }
        }
        if(t != 0)
        {
          printf("\n");
        }
        
    }
    return 0;
}