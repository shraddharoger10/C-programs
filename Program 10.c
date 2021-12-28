#include<stdio.h>
#include<stdbool.h>


// Question No:5
//Accept number from user and check whether number is even or odd


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven(int iNo)
{
	if (iNo % 2 ==0)
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
	int iValue=FALSE;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=chkEven(iValue);
	
	if (bRet == TRUE)
	{
		printf("Number is Even\n");
	}
	else
	{
		printf("Number is Odd\n");
	}
	
	return 0;
}


