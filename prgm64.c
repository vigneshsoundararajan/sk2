#include <stdio.h>

int main(void) {
 int a,b,c;
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("%d",c);
 if(c%2==0)
 {
 	printf("\n even");
 }
 else
 {
 	printf("\n odd");
 }
 
	return 0;
}
