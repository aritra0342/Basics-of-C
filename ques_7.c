/*
Write a C program to find the number of subsets of a set containing ‘n’ 
elements (The value of n is given by user)
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Number of subsets: %llu\n", (unsigned long long)pow(2, n));

    return 0;
}
