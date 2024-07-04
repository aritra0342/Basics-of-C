//Deletion of an array element from a particular position using function:
#include<stdio.h>
void arrdel (int [],int);
int main()
{
int a[10],i,n;
printf("Enter the size:");
scanf("%d",&n);
printf("\nEnter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe array elements are: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
arrdel(a,n);
}
void arrdel(int x[],int size)
{
int pos,i;
printf("\nEnter the Position whose value you want to delete:");
scanf("%d",&pos);
for(i=pos-1;i<size-1;i++)
x[i]=x[i+1];
printf("\nThe array after deletion:");
for(i=0;i<size-1;i++)
printf("\t%d",x[i]);
}
