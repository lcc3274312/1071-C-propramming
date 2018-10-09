#include<stdio.h>
int encode(int N)
{
	int a,b,c,d,n;
	a = N/1000;
	b =(N%1000)/100;
	c =(N%100)/10 ;
	d =(N%10);
	n =((a+5)%10)*10+c*1000+d*100+b;
	return n;
}
int decode(int n)
{
	int a,b,c,d,N ;
	a = n/1000;
	b =(n%1000)/100;
	c =(n%100)/10 ;
	d =(n%10);
	N =a*10+((c+5)%10)*1000+b+d*100;
	return N;
	
}
int main()
{
	int N ;
	int n ;
	int b ;
	while(1)
	{
	printf("Enter N (-1 to exit):");
	scanf("%d",&N);
	n=encode(N);	
	printf("encode(%d) = %d \n",N,n);
	N=decode(n);
	printf("decode(%d) = %d \n",n,N);
	}
}
