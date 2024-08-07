/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 1
Full Name  : Shubham Dharmendrabhai Kandoi
Student ID#: 144838232
Email      : sdkandoi@myseneca.ca
Section    : ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/
#include <stdio.h>

// Clear the standard input buffer 
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue 
void suspend(void);

// Input integer function
int inputInt(void);

// Input a positive integer function
int inputIntPositive(void);

// Input integer within a range function
int inputIntRange(int low, int high);

// Input a character from a set of options function
char inputCharOption(char str[]);

// Input C string function
void inputCString(char* str, int minLenth, int maxLength);

// Display formatted phone number function
void displayFormattedPhone(const char* phoneNumber);
