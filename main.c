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
int choice;

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

void AskUserNumber() {
    //Ask user for numbers
    printf("Please enter two number: ");
    scanf("%d%d", &a, &b);
}

    void AskUserFunction() {
    //Ask user for function
    printf("What would you like to do: \n");
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n"); //Choices
    scanf("%d", &choice);
}

int main() {

    AskUserNumber(); //Call function

    printf("Your numbers are %d and %d\n", a, b);

    AskUserFunction(); //Call function

    printf("Choice: %d", choice);
}