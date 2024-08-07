/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Shubham Dharmendrabhai Kandoi
Student ID#: 144838232
Email      : sdkandoi@myseneca.ca
Section    : ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
    int apples_Qty, oranges_Qty, pears_Qty, tomatoes_Qty, cabbages_Qty;
    int i;

    do
    {
        printf("Grocery Shopping\n");
        printf("================\n");

        do
        {
            printf("How many APPLES do you need? : ");
            scanf("%d", &apples_Qty);

            if (apples_Qty < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (apples_Qty < 0);
        printf("\n");

        do
        {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &oranges_Qty);

            if (oranges_Qty < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (oranges_Qty < 0);
        printf("\n");

        do
        {
            printf("How many PEARS do you need? : ");
            scanf("%d", &pears_Qty);

            if (pears_Qty < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (pears_Qty < 0);
        printf("\n");

        do
        {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &tomatoes_Qty);

            if (tomatoes_Qty < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (tomatoes_Qty < 0);
        printf("\n");

        do
        {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &cabbages_Qty);

            if (cabbages_Qty < 0)
                printf("ERROR: Value must be 0 or more.\n");
        } while (cabbages_Qty < 0);

        printf("\n--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        while (apples_Qty > 0)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &i);

            if (i > apples_Qty)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", apples_Qty);
            }
            else if (i <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                apples_Qty -= i;
                if (apples_Qty > 0)
                    printf("Looks like we still need some APPLES...\n");
                else
                    printf("Great, that's the apples done!\n\n");
            }
        }

        while (oranges_Qty > 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &i);

            if (i > oranges_Qty)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", oranges_Qty);
            }
            else if (i <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                oranges_Qty -= i;
                if (oranges_Qty > 0)
                    printf("Looks like we still need some ORANGES...\n");
                else
                    printf("Great, that's the oranges done!\n\n");
            }
        }

        while (pears_Qty > 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &i);

            if (i > pears_Qty)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pears_Qty);
            }
            else if (i <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                pears_Qty -= i;
                if (pears_Qty > 0)
                    printf("Looks like we still need some PEARS...\n");
                else
                    printf("Great, that's the pears done!\n\n");
            }
        }

        while (tomatoes_Qty > 0)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &i);

            if (i > tomatoes_Qty)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoes_Qty);
            }
            else if (i <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                tomatoes_Qty -= i;
                if (tomatoes_Qty > 0)
                    printf("Looks like we still need some TOMATOES...\n");
                else
                    printf("Great, that's the tomatoes done!\n\n");
            }
        }

        while (cabbages_Qty > 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &i);

            if (i > cabbages_Qty)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbages_Qty);
            }
            else if (i <= 0)
            {   
                printf("ERROR: You must pick at least 1!\n");
            }
            else
            {
                cabbages_Qty -= i;
                if (cabbages_Qty > 0)
                    printf("Looks like we still need some CABBAGES...\n");
                else
                    printf("Great, that's the cabbages done!\n\n");
            }
        }

        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &i);
        printf("\n");

    }

    while (i != 0);

    printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;

}