//Insertion Sort with Function:
#include<stdio.h>
int i;
void insertionsort(int a[],int n)
{
int j,min,temp;
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
}
void getarray(int x[],int n)
{
for(i=0;i<n;i++)
scanf("%d",&x[i]);
}
void printarray(int x[],int n)
{
for(i=0;i<n;i++)
printf("%d\t",x[i]);
}
void main()
{
int a[10],n;
printf("Enter the number of array elements: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
getarray(a,n);
printf("\nThe given unsorted array is: ");
printarray(a,n);
printf("\n\n***** Insertion Sort *****\n\n");
insertionsort(a,n);
printf("The final sorted array: ");
printarray(a,n);
}
