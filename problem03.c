#include <stdio.h>
int main()
{
    int n, count;
    count = 0;
    for (n = 1000; n > 0; n--)
    {
        count++;
        printf("%d\t", n);
        if (count == 5)
        {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}