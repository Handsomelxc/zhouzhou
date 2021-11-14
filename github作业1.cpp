#include<stdio.h>
#include<math.h>


int main()
{
	int i,sq,sum,a,d,c;
	int panduan(int x);
	int g,s,b,q;

	
	for(i=100;100<=i<=1000;i++)
    {     q = i/1000;
         b = i/100-i/1000*10;
         s = i/10-i/100*10;
         g = i-i/10*10;
         sum = q+b+s+g;
         sq = q*q+b*b+s*s+g*g;
        
         a=panduan(i);
         d=panduan(sum);
         c=panduan(sq);
         if(a==c&&a==b&&a==1)
         {
         	printf("%d\n",i);
		 }
         
    }
	}
	int panduan(int x)
{    int m;

   if(x<=10000){
   if (x==2)
{
	return  1;
}
else	for(m=2;m<=sqrt(x);m++)
	{
		if(x%m==0) 
		{
			return 0;
			break;
		}
		else return 1;
	}
}
}
