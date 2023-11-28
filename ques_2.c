/* Write a C program to take two integer values from user and store them into 
integer variables a and b and also show ab
*/
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    int ab = a * b;

    printf("The product of %d and %d is: %d\n", a, b, ab);

    return 0;
}
