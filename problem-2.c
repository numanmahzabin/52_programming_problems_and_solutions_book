#include <stdio.h>
#include <string.h>
void main()
{
    int t, len;
    char n[101];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", n);
        len = strlen(n);
        printf("%s\n", ((int)(n[len - 1]) % 2 == 0) ? "even" : "odd");
    }
}