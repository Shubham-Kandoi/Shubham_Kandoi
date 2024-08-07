/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
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
#define MAX_PRODUCTS 3
#define NUM_OF_GRAMS 64


// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo {
    int sku;
    double price;
    int calories;
    double weight;
};



// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

int getIntPositive(int* positive_Num);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

double getDoublePositive(double* positive_Num);

// 3. Opening Message (include the number of products that need entering)

void openingMessage(const int numOfProduct);

// 4. Get user input for the details of cat food product

struct CatFoodInfo getCatFoodInfo(const int sequence_Info);

// 5. Display the formatted table header

void displayCatFoodData(const int sku, const double* price, const int calories, const double* weight);

// 6. Display a formatted record of cat food data

void displayCatFoodHeader(void);

// 7. Logic entry point

void start(void);
