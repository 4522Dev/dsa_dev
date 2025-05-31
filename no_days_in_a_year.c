#include <stdio.h>

int main()
{
    int s;
    int y;
    scanf("%d", &s);
    switch (s)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        scanf("%d", &y);
        printf("31 Days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        scanf("%d", &y);
        printf("30 Days");
        break;
    case 2:
        scanf("%d", &y);
        if (y % 4 == 0)
        {
            printf("29 Days");
        }
        else
        {
            printf("28 Days");
        }

        break;
    default:
        printf("Choose valid option");
        break;
    }
    return 0;
}
/**
 * C program to print number of days in a month using switch case 
 */

// #include <stdio.h>

// int main()
// {
//     int month;

//     /* Input month number from user */
//     printf("Enter month number(1-12): ");
//     scanf("%d", &month);

//     switch(month)
//     {
//         case 1: 
//             printf("31 days");
//             break;
//         case 2: 
//             printf("28/29 days");
//             break;
//         case 3: 
//             printf("31 days");
//             break;
//         case 4: 
//             printf("30 days");
//             break;
//         case 5: 
//             printf("31 days");
//             break;
//         case 6: 
//             printf("30 days");
//             break;
//         case 7: 
//             printf("31 days");
//             break;
//         case 8: 
//             printf("31 days");
//             break;
//         case 9: 
//             printf("30 days");
//             break;
//         case 10: 
//             printf("31 days");
//             break;
//         case 11: 
//             printf("30 days");
//             break;
//         case 12: 
//             printf("31 days");
//             break;
//         default: 
//             printf("Invalid input! Please enter month number between 1-12");

//     }

//     return 0;
// }