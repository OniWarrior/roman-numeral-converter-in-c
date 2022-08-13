/*
 * Author: Stephen Aranda
 * File  : roman-numeral-converter-implementations.c
 * Date  : 8/12/2022
 * Description: This is the implementation file for roman-numeral-converter-protos.h
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

int getUserInput(){
    int userValue = 0;

    scanf("%d", &userValue);
    fflush(stdin);



    return userValue;
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

           scanf("%d",&userInput);
           fflush(stdin);

           printf("\n");
        }
    }
}

#endif