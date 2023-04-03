#include<stdio.h>
int main()
{
	
int a[100],i,n,b[100],c[100];
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	
	printf("Enter A Array Value=\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter B Array Value=\n");
		for(i=0;i<n;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
     printf("Addition Array Value=\n");
		for(i=0;i<n;i++)
	{
	
		c[i]= a[i]+b[i];
		printf("c[%d]=%d\n",i,c[i]);
	}
		
	return 0;
}
