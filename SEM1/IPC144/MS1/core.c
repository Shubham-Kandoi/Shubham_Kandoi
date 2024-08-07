
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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void clearInputBuffer(void)
{
   
    while (getchar() != '\n')
    {
    
        ; // do nothing!
    
    }
}

void suspend(void)
{
 
    printf("<ENTER> to continue...");
    
    clearInputBuffer();
    
    putchar('\n');

}

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
          
            printf("ERROR! Value must be between -3 and 11 inclusive: ");
        
        }
   
    } while (!(value <= high && value >= low));

    return value;
}

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