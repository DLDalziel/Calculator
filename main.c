/*
File name: Calculator
Description: This program calculates basic arithmatic in C++

Input: User inputted integers and a function
Output: Answer
Author: Deacon Dalziel

Date: 20/08/2025
Version: 1.0
*/

#include <stdio.h>

int a, b; //Declare integers

void AskUserNumber() { //Ask user for numbers
    printf("Please enter two number: ");
    scanf("%d%d", &a, &b);
}

int main() {

    AskUserNumber();

    printf("Your numbers are %d and %d", a, b);
}