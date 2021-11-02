#include <stdio.h>
void main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%s\n", (n % 2 == 0) ? "even" : "odd");
    }
}