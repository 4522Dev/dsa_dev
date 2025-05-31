#include <stdio.h>
int main()
{
    int a[4] = {1, 2, 3, 4};
    int i = 0;
    while (i <= 3)
    {
        printf("%d\n", a[i]);
        goto LOOP;
    LOOP:
        i++;
    }
    int b[2][4] = {{1, 2, 5, 7}, {3, 4, 1, 2}};
    for (int i = 0; i < 2; i++)
    {
        int j = 0;
        while (j < 4)
        {
            printf("%d ", b[i][j]);
            goto LOOP1;
        LOOP1:
            j++;
        }
        printf("\n");
    }
    return 0;
}