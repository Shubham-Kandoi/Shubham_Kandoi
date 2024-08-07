/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
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

// System Libraries
#include <stdio.h>

// User-Defined Libraries
#include "w8p2.h"


// ----------------------------------------------------------------------------
// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* num)
{
	int positiveNum;
	do
	{
		scanf("%d%*c", &positiveNum);

		if (positiveNum <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (positiveNum <= 0);

	if (num != NULL)
	{
		*num = positiveNum;
	}

	return positiveNum;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* num)
{
	double positiveNum;
	do
	{
		scanf("%lf%*c", &positiveNum);

		if (positiveNum <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (positiveNum <= 0);

	if (num != NULL)
	{
		*num = positiveNum;
	}

	return positiveNum;
}


// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int numOfProducts)
{
	printf("Cat Food Cost Analysis\n");

	printf("======================\n\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", numOfProducts);

	printf("NOTE: A 'serving' is %dg\n\n", NUM_OF_GRAMS);

	return;
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int sequence_Info)
{
	struct CatFoodInfo catFood;

	printf("Cat Food Product #%d\n", sequence_Info + 1);
	printf("--------------------\n");

	printf("SKU           : ");
	getIntPositive(&catFood.sku);

	printf("PRICE         : $");
	getDoublePositive(&catFood.price);

	printf("WEIGHT (LBS)  : ");
	getDoublePositive(&catFood.weight);

	printf("CALORIES/SERV.: ");
	getIntPositive(&catFood.calories);

	printf("\n");

	return catFood;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
	return;
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int sku, const double* price, const int calories, const double* weight)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calories);

	return;
}



// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* conversionResultToKg) {

	double poundsToKg = (*pounds) / LBS_TO_KG_CONVERSION;

	if (conversionResultToKg != NULL)
	{
		*conversionResultToKg = poundsToKg;
	}

	return poundsToKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* pounds, int* conversionResultToG) {

	int poundsToG = ((*pounds) / LBS_TO_KG_CONVERSION) * 1000;

	if (conversionResultToG != NULL)
	{
		*conversionResultToG = poundsToG;
	}

	return poundsToG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* conversionResultToKg, int* conversionResultToG) {

	double poundsToKg = (*pounds) / LBS_TO_KG_CONVERSION;
	int poundsToG = ((*pounds) / LBS_TO_KG_CONVERSION) * 1000;

	if (conversionResultToG != NULL && conversionResultToKg != NULL)
	{
		*conversionResultToG = poundsToG;
		*conversionResultToKg = poundsToKg;
	}
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int totalGrams, double* numberOfServings) {

	double servings = ((double)totalGrams) / servingSizeGrams;

	if (numberOfServings != NULL)
	{
		*numberOfServings = servings;
	}

	return servings;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numberOfServings, double* result) {

	double costPerServing = (*price) / (*numberOfServings);

	if (result != NULL)
	{
		*result = costPerServing;
	}

	return costPerServing;
}


// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totalCalories, double* result) {

	double costPerCal = (*price) / (*totalCalories);

	if (result != NULL)
	{
		*result = costPerCal;
	}

	return costPerCal;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo cfi) {

	struct ReportData rd;

	// Assigning Values
	rd.sku = cfi.sku;
	rd.calories = cfi.calories;
	rd.price = cfi.price;
	rd.weightLbs = cfi.weight;

	// Assigning calculated values
	rd.weightKg = convertLbsKg(&rd.weightLbs, &rd.weightKg);
	rd.weightG = convertLbsG(&rd.weightLbs, &rd.weightG);
	rd.servings = calculateServings(NUM_OF_GRAMS, rd.weightG, &rd.servings);

	// Total calories
	double totalCalories = rd.calories * rd.servings;

	rd.costPerServing = calculateCostPerServing(&rd.price, &rd.servings, &rd.costPerServing);
	rd.costPerCalorie = calculateCostPerCal(&rd.price, &totalCalories, &rd.costPerCalorie);


	// Returning the struct
	return rd;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", NUM_OF_GRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rd, const int cheapestProductCheck) {

	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", rd.sku, rd.price, rd.weightLbs, rd.weightKg, rd.weightG, rd.calories, rd.servings, rd.costPerServing, rd.costPerCalorie);
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cfi) {
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%5.2lf\n", cfi.sku, cfi.price);
	printf("\n");

	// Ending line
	printf("Happy shopping!\n");
	printf("\n");
}

// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	// Struct Arrays
	struct ReportData rd[maxProducts] = { {0} };
	struct CatFoodInfo cfi[maxProducts] = { {0} };

	// Declaring variables
	int i, cheapestIndex = 0;

	// Printing the opening message
	openingMessage(maxProducts);

	// Filling the cfi array
	for (i = 0; i < maxProducts; i++) {
		cfi[i] = getCatFoodInfo(i);
		rd[i] = calculateReportData(cfi[i]);
	}

	// Dsiplaying cat food header
	displayCatFoodHeader();

	// Displaying cat food data
	for (i = 0; i < maxProducts; i++) {
		displayCatFoodData(cfi[i].sku, &cfi[i].price, cfi[i].calories, &cfi[i].weight);
	}

	// Determining the cheapest product's sku and price
	double cheapestProductPrice = rd[0].costPerServing;
	for (i = 0; i < maxProducts; i++)
	{
		if (rd[i].costPerServing <= cheapestProductPrice)
		{
			cheapestProductPrice = rd[i].costPerServing;
			cheapestIndex = i;
		}
	}
	printf("\n");

	// Displaying the report header
	displayReportHeader();

	// Displaying the report data
	for (i = 0; i < maxProducts; i++)
	{
		displayReportData(rd[i], cheapestIndex);

		if (cheapestIndex == i)
		{
			printf(" ***\n");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");

	// Displaying final analysis
	for (i = 0; i < maxProducts; i++)
	{
		if (i == cheapestIndex)
		{
			displayFinalAnalysis(cfi[i]);
		}
	}
}