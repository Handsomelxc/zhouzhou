#include<stdio.h>


int judge(int x)
{   int r=0;
	while(x)
	{   
	    
		if(x%10==1)
		{
			r++;
		}
		x=x/10;
	}
	return r;
 } 
 
 int main()
 {
 	int n,N,num=0;
 	for(int N=2;;N++)
 	{
 		for(n=0;n<=N;n++)
 		{
 		   if(judge(n))
			{
				num=num+judge(n);
			}	
		}
		if(num==N)
		{
			printf("%d\n",N);
			break; 
		}
		num=0;
		
	}
	return 0;
 }
