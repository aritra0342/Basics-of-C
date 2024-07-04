//Selection Sort with Function:
#include<stdio.h>
int i;
void selectionsort(int a[],int n)
{
int j,min,temp;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
if(min!=i)
{
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
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
printf("\n\n***** Selection Sort *****\n\n");
selectionsort(a,n);
printf("The final sorted array: ");
printarray(a,n);
}
