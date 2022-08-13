/*
** Author: Stephen Aranda
** File name: roman-numeral-converter-protos.h
** Description: This file defines all my prototypes I intend to use in the roman numeral app.
** Date: 8/12/2022
*/

#include<stdio.h>


#ifndef ROMAN_NUMERAL_IMPLEMENTS
#define ROMAN_NUMERAL_IMPLEMENTS

void printTitle(){
    printf("******************WELCOME TO THE ROMAN NUMERAL CONVERT APP***********************\n");
    fflush(stdout);
}

void askForUserInput(){
    printf("Please enter a value within the range of 1 and 10: ");
    fflush(stdout);
}

void validateUserInput(int *userInput){
    if(*userInput >= 1 && *userInput <= 10){
       return; 
    }
    else{
        short int flag = 0;

        while(flag == 0){
           printf("Value is not within the specified range!\n");
           fflush(stdout);

           printf("Please enter a value within the correct range( 1 through 10): ");
           fflush(stdout);

           scanf("%d",userInput);
           fflush(stdin);           
           

           printf("\n");
           
           if(*userInput >= 1 && *userInput <= 10){
              return;
           }
               
           
        }
    }
}



int getUserInput(){
    int userValue = 0;

    scanf("%d", &userValue);
    fflush(stdin);
    
    printf("\n");
    validateUserInput(&userValue);


    return userValue;
}



void switchOnUserInput(int *userInput){
    switch(*userInput){
       case 1:  printf("Roman Numeral: I\n" );  fflush(stdout); break;   
       case 2:  printf("Roman Numeral: II\n"); fflush(stdout);  break; 
       case 3:  printf("Roman Numeral III\n"); fflush(stdout);  break;
       case 4:  printf("Roman Numeral: IV\n"); fflush(stdout);  break;
       case 5:  printf("Roman Numeral: V\n" ); fflush(stdout);  break;
       case 6:  printf("Roman Numeral: VI\n"); fflush(stdout);  break;
       case 7:  printf("Roman Numeral: VII\n"); fflush(stdout); break;
       case 8:  printf("Roman Numeral: VIII\n"); fflush(stdout); break;
       case 9:  printf("Roman Numeral: IX\n");  fflush(stdout); break;
       case 10: printf("Roman Numeral: X\n");   fflush(stdout); break;
    }

}

#endif