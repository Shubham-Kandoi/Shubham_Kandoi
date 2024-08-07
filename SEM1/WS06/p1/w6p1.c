/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
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
	double net_Income;
	int num_items;
	const double max_Income = 400000;
	const double min_Income = 500;
	double item_Cost[10];
	int priority[10],i;
	char finance[10];
	double totalcost = 0;

	printf("+--------------------------+\n");
	printf("+   Wish List Forecaster   |\n");
	printf("+--------------------------+\n");

	do {

		printf("\nEnter your monthly NET income: $");
		scanf("%lf", &net_Income);
		
		if (net_Income<min_Income ) {
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

	printf("Best of luck in all your future endeavours!\n");



    return 0;
}

/*
    HELPER: printf formatting statements....
	=========================================
	
    Step #7:
		printf("Item Priority Financed        Cost\n");
		printf("---- -------- -------- -----------\n");
		
		printf("%3d  %5d    %5c    %11.2lf\n", ...
		

	Step #8:
		printf("---- -------- -------- -----------\n");
		printf("                      $%11.2lf\n\n", ...

*/