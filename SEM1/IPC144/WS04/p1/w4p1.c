/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
    char loop_Num;
    int loop_ch;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");

    do
    {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loop_Num, &loop_ch);

        switch (loop_Num)
        {
        case 'D':
            if (loop_ch < 3 || loop_ch > 20)
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
            else
            {
                printf("DO-WHILE: ");
                int i = 0;
                do
                {
                    printf("D");
                    i++;
                } while (i < loop_ch);
                printf("\n\n");
            }
            break;

        case 'W':
            if (loop_ch < 3 || loop_ch > 20)
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
            else
            {
                printf("WHILE   : ");
                int i = 0;
                while (i < loop_ch)
                {
                    printf("W");
                    i++;
                }
                printf("\n\n");
            }
            break;

        case 'F':
            if (loop_ch < 3 || loop_ch > 20)
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
            else
            {
                int i = 0;
                printf("FOR     : ");
                for (i = 0; i < loop_ch; i++)
                {
                    printf("F");
                }
                printf("\n\n");
            }
            break;

        case 'Q':
            if (loop_ch != 0)
            {
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
            }
            break;

        default:
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
    } while (!(loop_Num == 'Q' && loop_ch == 0));

    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");

    return 0;

}