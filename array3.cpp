#include<stdio.h>
int main()
{
	
int a[100],i,n,sum=0,avg;
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Element in Array Are :");
		for(i=0;i<n;i++)
	{
		
		printf("%d ",a[i]);
		sum=sum+a[i];
	}
	printf("\nSum of Array=%d",sum);
	avg = sum/n;
	printf("\nAverage of Array=%d",avg);
	
	
	
	return 0;
}
