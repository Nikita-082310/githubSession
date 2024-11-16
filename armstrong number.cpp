#include<stdio.h>
int main()
{
	int num,number,remainder,result=0;
	printf("enter three digit number:");
	scanf("%d",&num);
	number=num;
	while(number!=0)
	{
		remainder=number%10;
		result+=remainder*remainder*remainder;
		number/=10;
	}
	if(result==num)
	printf("%d is an armstrong number:",num);
	else
		printf("%d is not an armstrong number:",num);

}
