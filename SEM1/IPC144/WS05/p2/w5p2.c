/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
Full Name  : Shubham Dharmnendrabhai Kandoi
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

#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    const int JAN = 1, DEC = 12;
    int flag = 1;
    int year = 1, month, day;
    double morning_R, evening_R, morning_T = 0.0, evening_T = 0.0, avg_M, avg_E;


    printf("General Well-being Log\n");
    printf("======================\n");


    while (flag == 1)
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        if (!(year >= MIN_YEAR && year <= MAX_YEAR))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }

        if (!(month >= JAN && month <= DEC))
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }

        if ((year >= MIN_YEAR && year <= MAX_YEAR) && (month >= JAN && month <= DEC))
        {
            flag = 0;
        }
    }
        printf("\n");
        printf("*** Log date set! ***\n\n");

        for (day = 1; day <= LOG_DAYS; day++)
        {
            printf("%d-", year);

            switch (month)
            {
            case 1:
                printf("JAN");
                break;
            case 2:
                printf("FEB");
                break;
            case 3:
                printf("MAR");
                break;
            case 4:
                printf("APR");
                break;
            case 5:
                printf("MAY");
                break;
            case 6:
                printf("JUN");
                break;
            case 7:
                printf("JUL");
                break;
            case 8:
                printf("AUG");
                break;
            case 9:
                printf("SEP");
                break;
            case 10:
                printf("OCT");
                break;
            case 11:
                printf("NOV");
                break;
            case 12:
                printf("DEC");
                break;
            default:
                printf("Invalid month number!\n");
                break;
            }
            printf("-%02d\n", day);


            do {

                printf("   Morning rating (0.0-5.0): ");
                scanf("%lf", &morning_R);
                if (morning_R < 0.0 || morning_R > 5.0)
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            } while (morning_R < 0.0 || morning_R > 5.0);


            do
            {
                printf("   Evening rating (0.0-5.0): ");
                scanf("%lf", &evening_R);
                if (evening_R < 0.0 || evening_R > 5.0)
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            } while (evening_R < 0.0 || evening_R> 5.0);
            printf("\n");

            morning_T += morning_R;
            evening_T += evening_R;


        }
        avg_M = morning_T / LOG_DAYS;
        avg_E = evening_T / LOG_DAYS;

        printf("Summary\n");
        printf("=======\n");
        printf("Morning total rating: %.3lf\n", morning_T);
        printf("Evening total rating:  %.3lf\n", evening_T);
        printf("----------------------------\n");
        printf("Overall total rating: %.3lf\n\n", morning_T + evening_T);
        printf("Average morning rating:  %.1lf\n", avg_M);
        printf("Average evening rating:  %.1lf\n", avg_E);
        printf("----------------------------\n");
        printf("Average overall rating:  %.1lf\n", (avg_M + avg_E) / 2);

        return 0;



   

}



