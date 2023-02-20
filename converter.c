/*
Author William Zhang (251215208)
The name of the program is a unit converter, and the purpose is to convert two units between each other
and output the value based on the user's input. The conversion can also be reversed between the two units.
*/

#include <stdio.h>

int main()
{
    int userInput;
    do {
    printf("Enter 1 for conversion between Kilograms and Pounds \n");
    printf("Enter 2 for conversion between Hectares and Acres \n");
    printf("Enter 3 for conversion between Litres and Gallons \n");
    printf("Enter 4 for conversion between Kilometre and Mile \n");
    printf("Enter 5 to quit \nPlease select a number:");
    //ask user to input a number
    scanf(" %d",&userInput);
    //if the user does not input a valid number, prompt them to try again
    if ((userInput != 1) && (userInput != 2) && (userInput != 3) && (userInput != 4) && (userInput != 5)) {
        printf("Please enter a valid input (1, 2, 3, 4, or 5) \n");
        }
    //case and switch statement for the initial input numbers
    switch(userInput) {
        //first case
        case 1:
        
            printf("Enter K for conversion from Kilograms to Pounds or P for Pounds to Kilograms: ");
            //initialize variables to collect input data and store calculated values
            char kiloPound;
            float numKilo, numPounds, kConvertP, pConvertK;
            //collect user input for either option
            scanf(" %c",&kiloPound);
            //case and switch statement for either option
            switch(kiloPound) {
                case 'K':
                    printf("Enter Kilogram value to convert to Pounds: ");
                    //collect user input for initial value
                    scanf("%f",&numKilo);
                    //calculate the new value
                    kConvertP = numKilo * 2.20462;
                    //print the resulting value
                    printf("Your conversion is: %0.3f Kilograms equals %f Pounds \n",numKilo,kConvertP);
                    break;
                case 'P':
                    printf("Enter Pounds value to convert to Kilograms: ");
                    //collect user input for initial value
                    scanf("%f",&numPounds);
                    //calculate the new value
                    pConvertK = numPounds / 2.20462;
                    //print the resulting value
                    printf("Your conversion is: %0.3f Pounds equals %f Kilograms \n ",numPounds,pConvertK);
                    break;
            }
            //if the user does not input either of the two options, prompt them to try again
            if ((kiloPound != 'K') && (kiloPound != 'P')) {
                printf("Please enter a valid input (K or P) \n");
            }
            break;
        //second case
        case 2:
        
            printf("Enter H for conversion from Hectares to Acres or A for Acres to Hectares: ");
            //initialize variables to collect input data and store calculated values
            char hecAcre;
            float numHectare, numAcres, hConvertA, aConvertH;
            //collect user input for either option
            scanf(" %c",&hecAcre);
            //case and switch statement for either option
            switch(hecAcre) {
                case 'H':
                    printf("Enter Hectares value to convert to Acres: ");
                    //collect user input for initial value
                    scanf("%f",&numHectare);
                    //calculate the new value
                    hConvertA = numHectare * 2.47105 ;
                    //print the resulting value
                    printf("Your conversion is: %0.3f Hectares equals %f Acres \n",numHectare, hConvertA);
                    break;
                case 'A':
                    printf("Enter Acres value to convert to Hectares: ");
                    //collect user input for initial value
                    scanf("%f",&numAcres);
                    //calculate the new value
                    aConvertH = numAcres / 2.47105;
                    //print the resulting value
                    printf("Your conversion is: %0.3f Acres equals %f Hectares \n",numAcres,aConvertH);
                    break;
            }
            //if the user does not input either of the two options, prompt them to try again
            if ((hecAcre != 'H') && (hecAcre != 'A')) {
                printf("Please enter a valid input (H or A) \n");
            }
            break;
        //third case
        case 3:
            
            printf("Enter L for conversion from Litres to Gallons or G for Gallons to Litres: ");
            //initialize variables to collect input data and store calculated values
            char litGallon;
            float numLitre, numGallons, lConvertG, gConvertL;
            //collect user input for either option
            scanf(" %c",&litGallon);
            //case and switch statement for either option
            switch(litGallon) {
                case 'L':
                    printf("Enter Litres value to convert to Gallons: ");
                    //collect user input for initial value
                    scanf("%f",&numLitre);
                    //calculate the new value
                    lConvertG = numLitre * 0.264172;
                    //print the resulting value
                    printf("Your conversion is: %0.3f Litres equals %f Gallons \n",numLitre,lConvertG);
                    break;
                case 'G':
                    printf("Enter Gallons value to convert to Litres: ");
                    //collect user input for initial value
                    scanf("%f",&numGallons);
                    //calculate the new value
                    gConvertL = numGallons / 0.264172;
                    //print the resulting value
                    printf("Your conversion is: %0.3f Gallons equals %f Litres \n",numGallons,gConvertL);
                    break;
            }
            //if the user does not input either of the two options, prompt them to try again
            if ((litGallon != 'L') && (litGallon != 'G')) {
                printf("Please enter a valid input (L or G) \n");
            }
            break;
        //fourth case
        case 4:
            
            printf("Enter K for conversion from Kilometres to Miles or M for Miles to Kilometres: ");
            //initialize variables to collect input data and store calculated values
            char kiloMiles;
            float numKilometres, numMiles, kConvertM, mConvertK;
            //collect user input for either option
            scanf(" %c",&kiloMiles);
            //case and switch statement for either option
            switch(kiloMiles) {
                case 'K':
                    printf("Enter Kilometre value to convert to Miles: ");
                    //collect user input for initial value
                    scanf("%f",&numKilometres);
                    //calculate the new value
                    kConvertM = numKilometres * 0.621371;
                    //print the resulting value
                    printf("Your conversion is: %0.3f Kilometres equals %f Miles \n",numKilometres,kConvertM);
                    break;
                case 'M':
                    printf("Enter Miles value to convert to Kilometres: ");
                    //collect user input for initial value
                    scanf("%f",&numMiles);
                    //calculate the new value
                    mConvertK = numMiles / 0.621371;
                    //print the resulting value
                    printf("Your conversion is: %0.3f Miles equals %f Kilometres \n",numMiles, mConvertK);
                    break;
            }
            //if the user does not input either of the two options, prompt them to try again
            if ((kiloMiles != 'K') && (kiloMiles != 'M')) {
                printf("Please enter a valid input (K or M) \n");
            }
            break;
        //fifth case
        case 5:
            //break for the final case
            break;
        }
    //end of the do while loop
    } while (userInput != 5);
    return 0;
}