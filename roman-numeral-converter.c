/*
 * author: stephen aranda
 * file  : roman-numeral-converter.c
 * date  : 8/12/2022
 * description: This is the entry point for the roman numeral converter app 
 * written in C language.
 */

#include "roman-numeral-converter-protos.h"

int main(){
    printTitle();
    askForUserInput();

    int userInput = getUserInput();

    validateUserInput(&userInput);
    switchOnUserInput(&userInput);

    return 0;
}