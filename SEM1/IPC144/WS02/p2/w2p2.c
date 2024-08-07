/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
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

int main(void)
{

    printf("Set Shirt Prices\n");
    printf("================\n");

   float sS_price;

    printf("Enter the price for a SMALL shirt: $");
    scanf("%f", &sS_price);

   float mS_price;

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f", &mS_price);

   float lS_price;

    printf("Enter the price for a LARGE shirt: $");
    scanf("%f", &lS_price);

    printf("\n");

    printf("Shirt Store Price List\n");

    printf("======================\n");

    printf("SMALL  : $%.2f\n", sS_price);
    printf("MEDIUM : $%.2f\n", mS_price);
    printf("LARGE  : $%.2f\n", lS_price);


    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M';
    const char tomSize = 'L';


    printf("\nPatty's shirt size is '%c'\n",patSize);

    int pattyShirts;

    printf("Number of shirts Patty is buying: ");
    scanf("%d", &pattyShirts);

    printf("\nTommy's shirt size is '%c'\n",tomSize);

    int tommyShirts;

    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tommyShirts);

    printf("\nSally's shirt size is '%c'\n", salSize);

    int sallyShirts;

    printf("Number of shirts Sally is buying: ");
    scanf("%d", &sallyShirts);


    float subTotal_1 = sS_price * pattyShirts;
    float tax_1 = subTotal_1 * TAX;
    tax_1 = (tax_1 + 0.005) * 100;
    float t1 = (int)tax_1 / (double)100;
    float total_1 = subTotal_1 + t1;
   
    float subTotal_2 = mS_price * sallyShirts;
    float tax_2 = subTotal_2 * TAX;
    tax_2 = (tax_2 + 0.005) * 100;
    float t2 = (int)tax_2 / (double)100;
    float total_2 = subTotal_2 + t2;

    float subTotal_3 = lS_price * tommyShirts;
    float tax_3 = subTotal_3 * TAX;
    tax_3 = (tax_3 + 0.005) * 100;
    float t3 = (int)tax_3 /(double)100;
    float total_3 = subTotal_3 + t3;

    float subTotal = subTotal_1 + subTotal_2 + subTotal_3;
    float tax = t1 + t2 + t3;
    float total = total_1 + total_2 + total_3;

    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2f %3d %9.4f %9.4f %9.4f\n",patSize,sS_price,pattyShirts,subTotal_1,t1,total_1);
    printf("Sally    %-4c %5.2f %3d %9.4f %9.4f %9.4f\n",salSize,mS_price,sallyShirts,subTotal_2,t2,total_2);
    printf("Tommy    %-4c %5.2f %3d %9.4f %9.4f %9.4f\n",tomSize,lS_price,tommyShirts,subTotal_3,t3,total_3);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4f %9.4f %9.4f\n\n",subTotal,tax,total);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");

    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");

    printf("%22.4f\n", subTotal);

    int toonies, loonies, quarters, dimes, nickles, pennies;
    float balance;
    
    toonies = subTotal / 2; 
    balance = subTotal - (toonies * 2);
    printf("Toonies  %3d %9.4f\n", toonies, balance);

    loonies = balance / 1;
    balance = balance - (loonies * 1);
    printf("Loonies  %3d %9.4f\n", loonies, balance);

    quarters = balance / 0.25;
    balance = balance - (quarters * 0.25);
    printf("Quarters %3d %9.4f\n", quarters, balance);

    dimes = balance / 0.10; 
    balance = balance - (dimes * 0.10);
    printf("Dimes    %3d %9.4f\n", dimes, balance);

    nickles = balance / 0.05;
    balance = balance - (nickles * 0.05);
    printf("Nickels  %3d %9.4f\n", nickles, balance);

    pennies = balance / 0.01;
    balance = balance - (pennies * 0.01);
    printf("Pennies  %3d %9.4f\n", pennies, balance);
    int total_shirts = pattyShirts + sallyShirts + tommyShirts;
    float average1 = subTotal / total_shirts;

    printf("\nAverage cost/shirt: $%.4f\n\n",average1);
    
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4f\n", total);


    toonies = (int)total / 2;
    balance = total - (toonies * 2);
    printf("Toonies  %3d %9.4f\n", toonies, balance);

    loonies = (int)balance / 1;
    balance = balance - (loonies * 1);
    printf("Loonies  %3d %9.4f\n", loonies, balance);

    quarters = balance / 0.25;
    balance = balance - (quarters * 0.25);
    printf("Quarters %3d %9.4f\n", quarters, balance);

    dimes = balance / 0.10;
    balance = balance - (dimes * 0.10);
    printf("Dimes    %3d %9.4f\n", dimes, balance);

    nickles = balance / 0.05;
    balance = balance - (nickles * 0.05);
    printf("Nickels  %3d %9.4f\n", nickles, balance);

    pennies = balance / 0.01;
    balance = balance - (pennies * 0.01);
    printf("Pennies  %3d %9.4f\n\n", pennies, balance);

    float average2 = total / total_shirts;
    printf("Average cost/shirt: $%.4f\n", average2);

    return 0;
}