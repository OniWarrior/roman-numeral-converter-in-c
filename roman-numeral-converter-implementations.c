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

#endif