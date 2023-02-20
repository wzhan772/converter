/*
Author William Zhang (251215208)
The name of the program is a number-to-text output and its purpose is to output a result in text that has
been typed in by the user in a numeric format.
*/

#include <stdio.h>

int main()
{
    int userInput;
    int hundreds = 0;
    int tens = 0;
    int ones = 0;
    
    do {
        printf("Please enter a value (1-999, 0 to quit): ");
        scanf("%d", &userInput);
        
        ones = userInput % 10;
        int tensTemp = (userInput - ones) / 10;
        tens = tensTemp % 10;
        int hundredsTemp = (tensTemp - tens);
        hundreds = hundredsTemp / 10;
        printf("You entered the number ");

    switch (hundreds) {
        
        case 1:
            printf("one hundred and ");
            break;
        case 2:
            printf("two hundred and ");
            break;
        case 3:
            printf("three hundred and ");
            break;
        case 4:
            printf("four hundred and ");
            break;
        case 5:
            printf("five hundred and ");
            break;
        case 6:
            printf("six hundred and ");
            break;
        case 7:
            printf("seven hundred and ");
            break;
        case 8:
            printf("eight hundred and ");
            break;
        case 9:
            printf("nine hundred and ");
            break;
    }
    switch (tens) {
        
        case 1:
            switch (ones) {
                case 1:
                    printf("eleven\n");
                    break;
                case 2:
                    printf("twelve\n");
                    break;
                case 3:
                    printf("thirteen\n");
                    break;
                case 4:
                    printf("fourteen\n");
                    break;
                case 5:
                    printf("fifteen\n");
                    break;
                case 6:
                    printf("sixteen\n");
                    break;
                case 7:
                    printf("seventeen\n");
                    break;
                case 8:
                    printf("eighteen\n");
                    break;
                case 9:
                    printf("nineteen\n");
                    break;
    }
            break;
        case 2:
            printf("twenty-\n");
            break;
        case 3:
            printf("thirty-\n");
            break;
        case 4:
            printf("fourty-\n");
            break;
        case 5:
            printf("fifty-\n");
            break;
        case 6:
            printf("sixty-\n");
            break;
        case 7:
            printf("seventy-\n");
            break;
        case 8:
            printf("eighty-\n");
            break;
        case 9:
            printf("ninety-\n");
            break;
    }
    if (tens != 1) {
        switch (ones) {
            
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            }
        }
    } while (userInput != 0);
    return 0;
}