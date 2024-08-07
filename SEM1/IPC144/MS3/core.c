/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 3
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
#include "core.h"
#include <ctype.h>
#include <string.h>
//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

// Wait for user to input the "enter" key to continue
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}


//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

//
// Copy your work done from Milestone #2 (core.c) into this file
// - Organize your functions in the same order as they are listed in the core.h file
//

// Input integer function
int inputInt(void) {

    char newLine = ' ';

    int value;

    do {

        scanf("%d%c", &value, &newLine);

        if (newLine != '\n') {

            clearInputBuffer();

            printf("Error! Input a whole number: ");
        }

    } while (newLine != '\n');


    return value;
}

// Input a positive integer function
int inputIntPositive(void) {

    char newLine = ' ';

    int value;

    do {

        scanf("%d%c", &value, &newLine);

        if (newLine != '\n') {

            clearInputBuffer();

            printf("Error! Input a number: ");

        }

        if (value <= 0) {

            printf("ERROR! Value must be > 0: ");

        }
    } while (value <= 0);

    return value;
}

// Input integer within a range function
int inputIntRange(int low, int high) {

    char newLine = ' ';

    int value;

    do {

        scanf("%d%c", &value, &newLine);

        if (newLine != '\n') {

            clearInputBuffer();

            printf("Error! Input a whole number: ");

        }

        else if (!(value <= high && value >= low)) {

            printf("ERROR! Value must be between 1 and 28 inclusive: ");

        }

    } while (!(value <= high && value >= low));

    return value;
}

// Input a character from a set of options function
char inputCharOption(char str[]) {

    int i, count = 0;

    char input;

    do {

        scanf(" %c", &input);

        for (i = 0; str[i] != '\0'; i++) {

            if (input == str[i]) {

                count++;

            }
        }

        if (count == 0) {

            printf("ERROR: Character must be one of [%s]: ", str);

        }

    } while (count == 0);

    clearInputBuffer();

    return input;
}


// Input C string function
void inputCString(char* str, int minLength, int maxLength) {

    int flag = 1;

    char ch = 'a';

    while (flag) {

        int len = 0;

        while (ch != '\n' && len <= maxLength) {

            ch = getchar();

            str[len] = ch;

            len++;

        };

        if (ch == '\n' && len <= (maxLength + 1)) {

            len--;

            str[len] = '\0';

        }

        else {

            str[maxLength] = '\0';

            clearInputBuffer();

        }

        if (minLength == maxLength && len != minLength) {

            printf("ERROR: String length must be exactly %d chars: ", minLength);

            ch = 'a';

        }

        else if (len < minLength || len > maxLength) {

            if (len > maxLength) {

                printf("ERROR: String length must be no more than %d chars: ", maxLength);

                ch = 'a';

            }

            else if (len < minLength) {

                printf("ERROR: String length must be between %d and %d chars: ", minLength, maxLength);

                ch = 'a';

            }

        }

        else {

            flag = 0;

        }
    }
}
void inputCStringNumbers(char* str, int minChar, int maxChar)
{
    int quitLoop = 1;
    char ch = 'x';

    while (quitLoop) {
        int len = 0;
        // Takes a string as input until it sees a newline character
        while (ch != '\n' && len <= maxChar) {
            ch = getchar();
            str[len] = ch;
            len++;
        };

        // If the string is less than or equal to the maxChars we will just add '\0' to the end to mark the end of the string
        if (ch == '\n' && len <= (maxChar + 1)) {
            len--;
            str[len] = '\0';
        }
        // If length is more than maxChar, we will add '\0' to the end and ignore the extra characters. We will also remove the extra characters from the buffer.
        else {
            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && len != minChar) {
            printf("Invalid 10-digit number! Number: ");
            ch = 'x';
        }
        else {
            quitLoop = 0;
        }
    }
}



// Display formatted phone number function
void displayFormattedPhone(const char* phoneNumber) {

    int len = 0, i;

    while (phoneNumber != NULL && phoneNumber[len] && isdigit(phoneNumber[len])) {

        len++;

    }

    if (len == 10) {

        i = 0;

        printf("(");

        while (i < 3) {

            printf("%c", phoneNumber[i]);

            i++;

        }

        printf(")");

        while (i < 6) {

            printf("%c", phoneNumber[i]);

            i++;

        }

        printf("-");

        while (i < 10) {

            printf("%c", phoneNumber[i]);

            i++;

        }
    }

    else {

        printf("(___)___-____");

    }

    if (phoneNumber != 0) {

        for (i = 0; phoneNumber[i] != '\0'; i++)

            len++;

    }

}

//////////////////////////////////////
// UTILITY FUNCTIONS
//////////////////////////////////////

