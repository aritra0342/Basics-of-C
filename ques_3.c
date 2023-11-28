/*Write a C program to take sides of a triangle from user and check whether 
the triangle is equilateral or not
*/
#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("It is an equilateral triangle.\n");
    } else {
        printf("It is not an equilateral triangle.\n");
    }

    return 0;
}
