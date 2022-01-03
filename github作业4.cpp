#include<stdio.h>

int sushu(int x)
{   int i; 
	for( i=2;i<x;i++)
	{
		if(x%i==0) break;
	}
	if(i==x) return 1;
	else return 0;
 } 
int fac(int p,int q)
{   int temp=p;
	while(q--)
	{
		p=p*temp;
	}
}
 int main()
 {
 	int q,p,j=0;
 	int q1,p1;
 	for(q=3;q<10000;q++)
 	{
 		for(p=3;p<10000;p++)
 		{
 			if(sushu(q)==1&&sushu(p)==1)
 			{
 				if(sushu(fac(p,q))&&sushu(fac(q,p)))
		        {
		        	printf("%d %d\n",p,q);
		 	        j=1;
		 	        break;
		        }
			 }
		 }
		 if(j==1) break;
		 
	 }
 }
