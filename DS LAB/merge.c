#include<stdio.h>
int main()
{
int a[100],b[100],c[100],i,n,m,k,j;
printf("enter the limit of array 1:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the limit of array 2:");
scanf("%d",&m);
printf("enter the elements:");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
while(i<n)
{
c[k]=a[i];
i++;
k++;
}
while(j<m)
{
c[k]=b[j];
j++;
k++;
}
printf("\n sorted array is:\n");
for(i=0;i<m+n;i++)
{
printf("%d \t",c[i]);
}
return 0;
}
