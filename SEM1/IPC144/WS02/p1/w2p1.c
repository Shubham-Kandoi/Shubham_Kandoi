/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Shubham Dharmendrabhai Kandoi 
Student ID#: 144388232
Email      : sdkandoi
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
    printf("Set Shirt Prices\n");

    printf("================\n");

    double  smallShirt;

    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf",&smallShirt);
    
    double mediumShirt;

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf",&mediumShirt);

    double largeShirt;

    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf",&largeShirt);

    printf("\n");

    printf("Shirt Store Price List\n");

    printf("======================\n");

    printf("SMALL  : $%.2lf\n", smallShirt);
    printf("MEDIUM : $%.2lf\n", mediumShirt);
    printf("LARGE  : $%.2lf\n\n", largeShirt);
    
    printf("Patty's shirt size is 'S'\n");
    
    int shirtsBuying;

    printf("Number of shirts Patty is buying: ");
    scanf("%d", &shirtsBuying);

    printf("\n");

    printf("Patty's shopping cart...\n");

    printf("Contains : %d shirts\n", shirtsBuying);

    double subtotal = (smallShirt * shirtsBuying);

    int roundupSubtotal = (subtotal + 0.005) * 100;
 
    printf("Sub-total: $%.4lf\n",roundupSubtotal/100.0);

    double tax = (subtotal * 0.13 );

    int roundupTax = (tax + 0.005) * 100;

    printf("Taxes    : $ %.4lf\n", roundupTax/100.0);

    double netTotal = (subtotal + tax);

    int roundup_NetTotal = (netTotal + 0.005) * 100.0;

    printf("Total    : $%.4lf\n", roundup_NetTotal/ 100.0);
   
    return 0;
}