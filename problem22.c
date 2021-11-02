#include <stdio.h>
#include <math.h>
int check_prime(int n)
{
    int i, root = sqrt(n);
    for (i = 2; i <= root; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t, count, a, b, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        count = 0;
        for (; a <= b; a++)
        {
            if (a != 1 && a > 0)
            {
                n = check_prime(a);
                count = count + n;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}