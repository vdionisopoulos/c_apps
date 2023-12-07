// Creator: Vassileios Dionysopoulos
// Date: 07/12/2023
// Description: This exersise compares two numbers and prints the result

#include <stdio.h>

int main(){
    int num1,num2; // Declare the variables

    printf("Enter the first number: "); // Ask the user to enter the first number
    scanf("%d",&num1); // Read the first number

    printf("Enter the second number: "); // Ask the user to enter the second number
    scanf("%d",&num2); // Read the second number

    if (num1 > num2){ // Compare the numbers
        printf("%d is greater than %d",num1,num2);
    
    }
    if (num1 < num2){ // Compare the numbers
        printf("%d is less than %d",num1,num2);
    }
    
    if (num1 == num2){ // Compare the numbers
        printf("%d is equal to %d",num1,num2);
    }
        
    return 0;
    // End main function
}