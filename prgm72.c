#include <stdio.h>
#include<string.h>
int main(void) {
	int m,i,flag=0;
	char a[100];
	printf("\n entear the string to be check");
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
	if(a[i]='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{
		flag=1;
		printf("\n yes it has vowel");
		break;

	}
	}
	if(flag==0)
	{
		printf("\n no it is not has vowel");
	}
	return 0;
}
