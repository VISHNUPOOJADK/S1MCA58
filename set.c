#include<stdio.h>
void main()
{
int i;
int u[5]={1,2,3,4,5};
int a[5]={1,0,0,1,1};
int b[5]={0,1,1,1,0};
int uni[5],ints[5],diffb[5],diffa[5],compa[5],compb[5];
printf("\n UNIVERSAL SET IS {");
for(i=0;i<5;i++)
	{
	 printf("%d,",u[i]);
	}
printf("}\n");
printf("\n SET A{");
for(i=0;i<5;i++)
	{
	if(a[i]==1)
	{
	printf("%d,",u[i]);
	}
}
printf("}\n");
printf("\n SET B{");
for(i=0;i<5;i++)
	{
	if(b[i]==1)
	{
	printf("%d,",u[i]);
	}
}
printf("}\n");
printf("\n Union set A and B in bit representation is=");
for(i=0;i<5;i++)
	{
	uni[i]=a[i]|b[i];
	printf("%d,",uni[i]);
	}
printf("\n UNION {");
for(i=0;i<5;i++)
	{
	if(uni[i]==1)
	{
	printf("%d,",u[i]);
	}
}	
printf("}\n");
printf("\n Intersection of set A and B in bit representation is=");
for(i=0;i<5;i++)
	{
	ints[i]=a[i]&b[i];
	printf("%d,",ints[i]);
	}
printf("\n INTERSECTION {");
for(i=0;i<5;i++)
	{
	if(ints[i]==1)
	{
	printf("%d,",u[i]);
	}
}	
printf("}\n");
printf("\n Complement of set A in bit representation is=");
for(i=0;i<5;i++)
	{
	compa[i]=1-a[i];
	printf("%d,",compa[i]);
	}
printf("\n A COMPLIMENT {");
for(i=0;i<5;i++)
	{
	if(compa[i]==1)
	{
	printf("%d,",u[i]);
	}
}	
printf("}\n");
printf("\n Complement of set B in bit representation is=");
for(i=0;i<5;i++)
	{
	compb[i]=1-b[i];
	printf("%d,",compb[i]);
	}
printf("\n B COMPLIMENT {");
for(i=0;i<5;i++)
	{
	if(compb[i]==1)
	{
	printf("%d,",u[i]);
	}
}	
printf("}\n");
printf("\n Difference of set A and B in bit representation is=");
for(i=0;i<5;i++)
	{
	diffa[i]=a[i]&compb[i];
	printf("%d,",diffa[i]);
	}
printf("\n A- B {");
for(i=0;i<5;i++)
	{
	if(diffa[i]==1)
	{
	printf("%d,",u[i]);
	}
}	
printf("}\n");
printf("\n Difference of set B and A in bit representation is=");
for(i=0;i<5;i++)
	{
	diffb[i]=b[i]&compa[i];
	printf("%d,",diffb[i]);
	}
printf("\n B - A {");
for(i=0;i<5;i++)
	{
	if(diffb[i]==1)
	{
	printf("%d,",u[i]);
	}
}	
printf("}\n");	
}
	
	
	
	
