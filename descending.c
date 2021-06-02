#include<stdio.h>
int main()
{
	int n[100],i,j,t;
	for(i=0;i<=10;i++);
	{
		printf("enter the numbers:");
		scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
			for(j=i+1;j<n;j++);
			{
			if(n[i]<n[j])
			{
				t=n[i];
				n[i]=n[j];
				n[j]=t;
			}
		}
	}
}

printf("\nNumbers in ascending orders:");
	for(i=0;i,n;i++)
	{
		printf("\n%d",n[i]);
	}
	
}

