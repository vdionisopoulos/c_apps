#include <stdio.h>

int main() {
    int largestNumber;
    int smallestNumber;
    int num1;
    int num2;
    int num3;
    int temp;

    printf("Input 5 integers: ");
    scanf("%d %d %d %d %d", &largestNumber, &smallestNumber, &num1, &num2, &num3);

    if (smallestNumber > largestNumber) {
        temp = largestNumber;
        largestNumber = smallestNumber;
        smallestNumber = temp;
    }

    if (num1 > largestNumber) {
        largestNumber = num1;
    }

    if (num1 < smallestNumber) {
        smallestNumber = num1;
    }

    if (num2 > largestNumber) {
        largestNumber = num2;
    }

    if (num2 < smallestNumber) {
        smallestNumber = num2;
    }

    if (num3 > largestNumber) {
        largestNumber = num3;
    }

    if (num3 < smallestNumber) {
        smallestNumber = num3;
    }

    printf("Largest number is %d\n", largestNumber);
    printf("Smallest number is %d\n", smallestNumber);

    return 0;



}