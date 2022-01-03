#include<stdio.h>
#include<stdlib.h>
void conv(int *u,int *v,int m,int n);
int max(int x,int y)
{
	return x>y?x:y;
}
int min(int x,int y)
{
	return x<y?x:y;
}
main()
{
	int a[10];
	int b[10];
	
	for(int i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	int m=6;
	int n=3;
	conv(a,b,m,n);
}

void conv(int u[],int v[],int m,int n)
{
	int k,i;
	int len = m+n-1;
	int result [100]={0};
	for(k=0;k<len;k++)
	{
		for(int i=max(0,k+1-n);i<=min(k,m-1);i++)
		result[k] += u[i]*v[k-i];
		printf("%d\n",result[k]);
		
	}
}
