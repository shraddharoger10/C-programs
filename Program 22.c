#include<stdio.h>

//Question no:4

//Write a program which accept number from user and count frequency of 4 in it.
//input: 2395
//output:  0

//input: 922432
//output: 1

//input:9440
//output: 2



int CountFour(int iNo)
{
	int iCnt=0, iDigit=0;
	
	while(iNo != 0)
	{
		iDigit=iNo%10;
		if(iDigit == 4)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
    int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountFour(iValue);
	printf("Number of four is: %d\n",iRet);
	
	return 0;
}