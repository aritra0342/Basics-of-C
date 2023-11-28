/*Write a C program to check whether an inputted integer is divisible by 4 or 
not (Without using % operator)
*/
#include <stdio.h>

int main() {
    int num;

    // Input for the integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking divisibility by 4 using bitwise AND
    if ((num & 3) == 0) {
        printf("%d is divisible by 4.\n", num);
    } else {
        printf("%d is not divisible by 4.\n", num);
    }

    return 0;
}
