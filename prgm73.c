#include <stdio.h>
int main() 
{
	int k,r,l,i,flag=0;
	scanf("%d",&k);
	scanf("%d %d",&l,&r);
	for(i=l;i<r;i++)
	{
	    if(k>=l&&k<=r)
	    {
	    	flag=1;
	        printf("yes..%d is between %d and %d",k,l,r);
	        break;
	    }
	}
	  if(flag==0)
	   {
	        printf("it is not between two numbers");
	   }
	return 0;
}
