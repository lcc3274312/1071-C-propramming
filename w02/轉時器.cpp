int main (){
	int sec;
	int hh,mm,cc;
	printf("Enter sec:");
	scanf("%d",&sec);
    hh=sec/3600;
    mm=sec%3600/60;
    cc=sec%60;
    printf("%d sec = %02d : %02d : %02d \n",sec,hh,mm,cc);
		
}
