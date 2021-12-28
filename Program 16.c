#include<stdio.h>

//Question no:3

//Write a program which accept number from user and display all its non factors.
//input: 12
//output:  5  7  8  9  10  11

//input: 13
//output: 2   3  4  5   6   7   8   9   10   11   12

//input:10
//output: 3  4   6   7   8   9


void NonFact(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if(iNo % iCnt !=0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	NonFact(iValue);
	
	return 0;
}