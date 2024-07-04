//Bubble Sort with Function:
#include<stdio.h>
#define max 10
int a[max],n,i;
void bubble(int a[], int size)
{
int j,temp;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
void input()
{
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
printf("\nEnter the %dth element: ",i);
scanf("%d",&a[i]);
}
}
void output(int a[],int size)
{
for(i=0;i<size;i++)
printf("%d\t",a[i]);
}
void main()
{
input();
printf("\nThe unsorted array elements: ");
output(a,n);
bubble(a,n);
printf("\nThe sorted array elements: ");
output(a,n);
}
