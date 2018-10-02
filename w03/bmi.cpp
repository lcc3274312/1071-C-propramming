#include<stdio.h>
int main(){
	float hal,wei,BMI=0;
	printf("請輸入你的身高(M)，體重 :");
	scanf("%f %f",&hal,&wei);
	BMI =wei/(hal*hal);
	printf("%f\n",BMI);
	if(BMI<18.5)
		printf("你的體重過輕囉");
	else if (BMI<24&&BMI>=18.5)
		printf("你的體重正常拉");
	else if (BMI<27&&BMI>=24)
		printf("你的體重過重拉");
	else if (BMI<30&&BMI>=27)
		printf("你的體重輕度肥胖拉");
	else if (BMI<30&&BMI>=35)
		printf("你的體重中度肥胖拉");
	else if (BMI>=35)
		printf("你的體重重度肥拉拉");
	else 
		printf("你是不是地球人");
}
