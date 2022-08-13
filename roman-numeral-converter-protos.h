/*
** Author: Stephen Aranda
** File name: roman-numeral-converter-protos.h
** Description: This file defines all my prototypes I intend to use in the roman numeral app.
** Date: 8/12/2022
*/

#include "roman-numeral-converter-implementations.c"

#ifndef ROMAN_NUMERAL_PROTOS
#define ROMAN_NUMERAL_PROTOS

void printTitle();
void askForUserInput();
int  getUserInput();
void validateUserInput(int *userInput);
void switchOnUserInput(int *userInput);

#endif