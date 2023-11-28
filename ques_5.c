/*Write a program to check whether an integer is a power of 2 or not.
*/
#include <stdio.h>
#include <stdbool.h>
/*you have to use <stdbool>*/

bool isPowerOfTwo(int num) {
    if (num <= 0) {
        return false;
    }

    // A number that is a power of 2 has only one bit set to 1
    // Checking if the number is a power of 2 by counting the set bits
    return (num & (num - 1)) == 0;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPowerOfTwo(number)) {
        printf("%d is a power of 2.\n", number);
    } else {
        printf("%d is not a power of 2.\n", number);
    }

    return 0;
}
