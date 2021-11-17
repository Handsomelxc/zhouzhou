#include<stdio.h>
#include<math.h>


int main()
{
	int i,sq,sum,a,d,c;
	int panduan(int a);
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
         if(a==1&&d==1&&c==1)
         {
         	printf("%d\n",i);
		 }
         
    }
	}
int panduan(int a)
{  if(a<10000)
{

	int b=2;
	for(;b<a;b++)
	{
    if(a%b==0){
	return 0;
    break;
   } }
if(a==b)
return 1;
}
}
	
