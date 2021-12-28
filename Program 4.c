#include<stdio.h>
#include<stdbool.h>

// Question No:4  
//check whether number is divisible by 5 or not

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool check(int iNo)
{
	if((iNo % 5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=check(iValue);
	
	if (bRet==TRUE)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Not Divisible by 5");
	}
	
	return 0;
}



/* Question No:5
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
}*/
