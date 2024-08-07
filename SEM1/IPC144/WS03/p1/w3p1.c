/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  :Shubham Dharmendrabhai Kandoi
Student ID#:144838232
Email      :sdkandoi@myseneca.ca
Section    :ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const int p1_Id = 111;
    const int p2_Id = 222;
    const int p3_Id = 111;

    const double p1_Price = 111.49;
    const double p2_Price = 222.99;
    const double p3_Price = 334.49;

    const char p1_Taxed = 'Y';
    const char p2_Taxed = 'N';
    const char p3_Taxed = 'N';
    const double average = (p1_Price + p2_Price + p3_Price) /3;
    const double testValue = 330.99;

    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n", p1_Id);
    printf("  Taxed: %c\n", p1_Taxed);
    printf("  Price: $%.4f\n\n", p1_Price);

    printf("Product-2 (ID:%d)\n", p2_Id);
    printf("  Taxed: %c\n", p2_Taxed);
    printf("  Price: $%.4f\n\n", p2_Price);

    printf("Product-3 (ID:%d)\n", p3_Id);
    printf("  Taxed: %c\n", p3_Taxed);
    printf("  Price: $%.4f\n\n", p3_Price);

    printf("The average of all prices is: $%.4f\n\n", average);
    
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");

    printf("Some Data Analysis...\n");
    printf("=====================\n");

    printf("1. Is product 1 taxable? -> %d\n\n", p1_Taxed == 'Y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", (p2_Taxed == 'N') && (p3_Taxed == 'N'));
    printf("3. Is product 3 less than testValue ($%.2f)? -> %d\n\n", testValue, p3_Price < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", (p3_Price > p1_Price) && (p3_Price > p2_Price));
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? ->  %d (price difference: $%.2f)\n\n", (p1_Price)>=(p3_Price-p2_Price),(p3_Price-p2_Price));
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n",p2_Price >= average);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (p1_Id != p2_Id) && (p1_Id != p3_Id));
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (p2_Id != p1_Id) && (p2_Id != p3_Id));
    printf("9. Based on product ID, product 3 is unique -> %d\n\n", (p3_Id != p1_Id) && (p3_Id != p2_Id));

        return 0;
}