#include<stdio.h>
int main()
{
	int h1,h2 ;
	printf("Enter height (-1 to exit ) : ");
		scanf("%d %d",&h1,&h2);
	while(h1>=0 ||h2>=0)
	{
		
		float kg1,kg2 ;
		for(int i=h1;h1<=h2;h1++)
		{
		kg1 = 18.5*h1*h1/10000;
		kg2 = 24.0*(h1*h1/10000.);
		printf ("%d cm: %.1f ~ %.1f (kg)\n",h1,kg1,kg2);
		}
		printf("Enter height (-1 to exit ) : ");
		scanf("%d %d",&h1,&h2);
	}
	printf("Bye! Coding by 407411346");
		
}
