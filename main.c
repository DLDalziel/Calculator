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

int Add(int a, int b) { //Add function
    return a + b;
}
int Subtract(int a, int b) { //Subtract function
    return a - b;
}
int Multiply(int a, int b) { //Multiply function
    return a * b;
}
int Divide(int a, int b) { //Divide function
    return a / b;
}

void AskUserNumber() { //Ask user for numbers
    printf("Please enter two number: ");
    scanf("%d%d", &a, &b);
}

int main() {

    AskUserNumber();

    printf("Your numbers are %d and %d", a, b);
}