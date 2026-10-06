#include<stdio.h>
int main()
{
int a[10],i,n,key,flag=0;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be searched:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("element %d found at position %d",key,i+1);
flag=1;
}
}
if(flag==0)
{
printf("element %d is not found",key);
}
return 0;
}

