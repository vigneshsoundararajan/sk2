#include <stdio.h>
#include<string.h>
int main(void) {
	int m,i,j,flag=0;
	char a[100];
	printf("\n entear the string to be check");
	scanf("%s",a);
	m=strlen(a);
	for(i=0,j=m-1;i<=m/2;i++,j--)
	{
	if(a[i]!=a[j])
	{
		flag=1;
		printf("\n not a palindrome");

	}
	}
	if(flag==0)
	{
		printf("\n it is palindrome");
	}
	return 0;
}
