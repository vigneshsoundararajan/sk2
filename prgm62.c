#include<stdio.h>
#include<string.h>
void main()
{
	int n,i,flag=0;
	char a[10];
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	 if(a[i]=='1'||a[i]=='0')
	 {
	  flag=1;
	 }
	 else
	 {
	 	flag=0;
	 	break;
	 }
	}
	if(flag==1)
	{
			printf("\n yes");
	}
}
