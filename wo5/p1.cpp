#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f,h ; 
	printf("Enter two integers: ");
	scanf("%d %d",&a,&b);
	c = a+b ;
	d = a-b ;
	e = a*b ;
	f = a/b ;
	h = a%b ;
	printf("%d + %d = %d\n",a,b,c);
	printf("%d - %d = %d\n",a,b,d);
	printf("%d * %d = %d\n",a,b,e);
	printf("%d / %d = %d\n",a,b,f);
	printf("%d %% %d = %d\n",a,b,h);	
}
