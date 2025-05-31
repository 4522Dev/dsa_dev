#include <stdio.h>
void prime(int p)
{
    int count = 0;
    for (int i = 1; i < p; i++)
    {
        if (p % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("\nPrime");
    }
    else
    {
        printf("\nNot Prime");
    }
}
int main()
{
    int a[5];
    for (int i = 0;i<4;i++)
    {
        scanf("%d ", &a[i]);

    }
    for (int i = 0; i < 5; i++)
    {
        prime(a[i]);
    }
    return 0;
}