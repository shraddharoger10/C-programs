#include<stdio.h>

//Question no:4

//Write a program which accept number from user and return summation of all its non factors.
//input: 12
//output:50

//input:10
//output:37


int SumNonFact(int iNo)
{
	int iCnt=0, iSum=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if(iNo % iCnt !=0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue=0, iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFact(iValue);
	
	printf("%d",iRet);
	
	return 0;
}


