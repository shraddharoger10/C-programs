#include<stdio.h>

// Question No:5
//Accept one number and that much of "*" on screen

void Accept(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1; iCnt<=5; iCnt++)
	{
		printf("*");
	}
}

int main()
{
	int iValue=0;
	iValue=5;
	
	Accept(iValue);
	return 0;
}
