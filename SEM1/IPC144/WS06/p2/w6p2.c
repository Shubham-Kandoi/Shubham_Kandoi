/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
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
#define MAX_ITEMS 10
#define MIN_ITEMS 1


int main(void)
{
	double net_Income;//Monthly Net Income
	int num_items;// Total Items
	const double max_Income = 400000.00;
	const double min_Income = 500.00;
	double item_Cost[MAX_ITEMS];
	int priority[MAX_ITEMS], i;
	char finance[MAX_ITEMS];
	double totalcost = 0;
	int selection, total_Years,total_Months,priority_Choice;
	int  hasFinance;
	double filtered_Total;
	printf("+--------------------------+\n");
	printf("+   Wish List Forecaster   |\n");
	printf("+--------------------------+\n");

	do {

		printf("\nEnter your monthly NET income: $");
		scanf("%lf", &net_Income);

		if (net_Income < min_Income) {
			
			printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n", min_Income);
		}

		else if (net_Income > max_Income) {
			
			printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n", max_Income);
		}

	} while (net_Income<min_Income || net_Income>max_Income);

	do {

		printf("\nHow many wish list items do you want to forecast?: ");
		scanf("%d", &num_items);

		if (num_items<MIN_ITEMS || num_items>MAX_ITEMS) {
			
			printf("ERROR: List is restricted to between 1 and 10 items.\n");

		}

	} while (num_items<MIN_ITEMS || num_items>MAX_ITEMS);

	for (i = 0; i < num_items; i++)
	{
		printf("\nItem-%d Details:\n", i + 1);

		do {
			
			printf("   Item cost: $");
			scanf("%lf", &item_Cost[i]);

			if (item_Cost[i] < 100) {
			
				printf("      ERROR: Cost must be at least $100.00\n");
			}

		} while (item_Cost[i] < 100);

		do {

			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
			scanf("%d", &priority[i]);

			if (priority[i] < 1 || priority[i] >3) {
				
				printf("      ERROR: Value must be between 1 and 3\n");
			}


		} while (priority[i] < 1 || priority[i]>3);

		do {
			
			printf("   Does this item have financing options? [y/n]: ");
			scanf(" %c", &finance[i]);

			if (finance[i] != 'y' && finance[i] != 'n') {
			
				printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
			}

		} while (finance[i] != 'y' && finance[i] != 'n');

		totalcost += item_Cost[i];

	}

	printf("\nItem Priority Financed        Cost\n");
	printf("---- -------- -------- -----------\n");

	for (i = 0; i < num_items; i++) {
		
		printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], finance[i], item_Cost[i]);
	}
	
	printf("---- -------- -------- -----------\n");
	printf("                      $%11.2lf\n\n", totalcost);


	do {


		printf("\nHow do you want to forecast your widh list?\n");
		printf(" 1. All items (no filter)\n");
		printf(" 2. By priority\n");
		printf(" 0. Quit/Exit\n");

		printf("Selection: ");
		scanf("%d", &selection);

		if (selection < 0 || selection >2) {
			
			printf("\nERROR: Invalid menu selection.\n");

		}

		if (selection == 1) {

			hasFinance = 0;

			for (int i = 0; i < num_items; i++) {
				
				if (finance[i] == 'y') {

					hasFinance = 1;
				}
			}


			printf("\n====================================================\n");			printf("Filter:   All items\n");

			total_Years = ((int)(totalcost / net_Income)/12);
			total_Months = ((int)(totalcost / net_Income) % 12 + 1);

			printf("Amount:   $%1.2lf\n",totalcost);
			printf("Forecast: %d years, %d months\n", total_Years, total_Months);

			if (hasFinance) {
				
				printf("NOTE: Financing options are available on some items.\n");
				printf("      You can likely reduce the estimated months.\n");

			}

			printf("\n====================================================\n");
				
		}

		else if(selection == 2) {


			printf("\nWhat priority do you want to filter by? [1-3]: ");
			scanf("%d", &priority_Choice);
			printf("\n====================================================\n");
			printf("Filter:   by priority (%d)\n", priority_Choice);

			filtered_Total = 0;

			for (i = 0; i < num_items; i++) {

				if (priority[i] == priority_Choice) {
					filtered_Total += item_Cost[i];
				}
			}


			total_Months = (filtered_Total / net_Income);

			total_Years = ((int)total_Months) / 12;

			total_Months = (total_Months - (total_Years * 12)) + 1;

			hasFinance = 0;

			for (i = 0; i < num_items; i++) {

				if (finance[i] == 'y' && priority[i] == priority_Choice) {
					hasFinance = 1;
				}
			}


			printf("Amount:   $%1.2lf\n", filtered_Total);
			printf("Forecast: %d years, %d months\n", total_Years, total_Months);

			if (hasFinance) {
			
				printf("NOTE: Financing options are available on some items.\n");
				printf("      You can likely reduce the estimated months.\n");
			}



			printf("====================================================\n");


		}



	} while (selection != 0);

	printf("\nBest of luck in all your future endeavours!\n");

	return 0;
}