/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
Full Name  : Shubham Dharmendrabhai Kandoi
Student ID#: 144838232 
Email      : sdkandoi@myseneca.ca
Section    : ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
   
    const double GRAMS_IN_LBS = 453.5924;
    char c1_Type;
    char c2_Type;
    char c3_Type;
    int c1_Weight;
    int c2_Weight;
    int c3_Weight;
    char c1_Cream;
    char c2_Cream;
    char c3_Cream;
    char c_Strength;
    char c_Preference;
    int daily_Servings;


    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");

    printf("Enter the coffee product information being sold today...\n\n");

    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &c1_Type);
    printf("Bag weight (g): ");
    scanf("%d", &c1_Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &c1_Cream);
    
    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &c2_Type);
    printf("Bag weight (g): ");
    scanf("%d", &c2_Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &c2_Cream);

    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &c3_Type);
    printf("Bag weight (g): ");
    scanf("%d", &c3_Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &c3_Cream);

    printf("\n---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");                       
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |  % d   | %4d | %6.3lf |   %d   |\n", c1_Type == 'L' || c1_Type == 'l', c1_Type == 'M' || c1_Type == 'm', c1_Type == 'R' || c1_Type == 'r', c1_Weight, c1_Weight / GRAMS_IN_LBS, c1_Cream == 'Y' || c1_Cream == 'y');
    printf(" 2 |   %d   |   %d    |  % d   | %4d | %6.3lf |   %d   |\n", c2_Type == 'L' || c2_Type == 'l', c2_Type == 'M' || c2_Type == 'm', c2_Type == 'R' || c2_Type == 'r', c2_Weight, c2_Weight / GRAMS_IN_LBS, c2_Cream == 'Y' || c2_Cream == 'y');
    printf(" 3 |   %d   |   %d    |  % d   | %4d | %6.3lf |   %d   |\n\n", c3_Type == 'L' || c3_Type == 'l', c3_Type == 'M' || c3_Type == 'm', c3_Type == 'R' || c3_Type == 'r', c3_Weight, c3_Weight / GRAMS_IN_LBS, c3_Cream == 'Y' || c3_Cream == 'y');

    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &c_Strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &c_Preference);
    printf("Typical number of daily servings: ");
    scanf("%d", &daily_Servings);

    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", (c_Strength == c1_Type || c_Strength == (c1_Type + ('a' - 'A')) || c_Strength + ('a' - 'A') == c1_Type), daily_Servings >= 1 && daily_Servings <= 4, ((c_Preference == 'Y' || c_Preference == 'y') && (c1_Cream == 'Y' || c1_Cream == 'y')) || ((c_Preference == 'N' || c_Preference == 'n') && (c1_Cream == 'N' || c1_Cream == 'n')));
    printf(" 2|       %d         |      %d      |   %d   |\n", (c_Strength == c2_Type || c_Strength == (c2_Type + ('a' - 'A')) || c_Strength + ('a' - 'A') == c2_Type), daily_Servings >= 5 && daily_Servings <= 9, ((c_Preference == 'Y' || c_Preference == 'y') && (c2_Cream == 'Y' || c2_Cream == 'y')) || ((c_Preference == 'N' || c_Preference == 'n') && (c2_Cream == 'N' || c2_Cream == 'n')));
    printf(" 3|       %d         |      %d      |   %d   |\n\n", (c_Strength == c3_Type || c_Strength == (c3_Type + ('a' - 'A')) || c_Strength + ('a' - 'A') == c3_Type), daily_Servings >= 10, ((c_Preference == 'Y' || c_Preference == 'y') && (c3_Cream == 'Y' || c3_Cream == 'y')) || ((c_Preference == 'N' || c_Preference == 'n') && (c3_Cream == 'N' || c3_Cream == 'n')));
    printf("Enter how you like your coffee...\n\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &c_Strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &c_Preference);
    printf("Typical number of daily servings: ");
    scanf("%d", &daily_Servings);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", (c_Strength == c1_Type || c_Strength == (c1_Type + ('a' - 'A')) || c_Strength + ('a' - 'A') == c1_Type), daily_Servings >= 1 && daily_Servings <= 4, ((c_Preference == 'Y' || c_Preference == 'y') && (c1_Cream == 'Y' || c1_Cream == 'y')) || ((c_Preference == 'N' || c_Preference == 'n') && (c1_Cream == 'N' || c1_Cream == 'n')));
    printf(" 2|       %d         |      %d      |   %d   |\n", (c_Strength == c2_Type || c_Strength == (c2_Type + ('a' - 'A')) || c_Strength + ('a' - 'A') == c2_Type), daily_Servings >= 5 && daily_Servings <= 9, ((c_Preference == 'Y' || c_Preference == 'y') && (c2_Cream == 'Y' || c2_Cream == 'y')) || ((c_Preference == 'N' || c_Preference == 'n') && (c2_Cream == 'N' || c2_Cream == 'n')));
    printf(" 3|       %d         |      %d      |   %d   |\n", (c_Strength == c3_Type || c_Strength == (c3_Type + ('a' - 'A')) || c_Strength + ('a' - 'A') == c3_Type), daily_Servings >= 10, ((c_Preference == 'Y' || c_Preference == 'y') && (c3_Cream == 'Y' || c3_Cream == 'y')) || ((c_Preference == 'N' || c_Preference == 'n') && (c3_Cream == 'N' || c3_Cream == 'n')));

    printf("\nHope you found a product that suits your likes!\n");

    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/