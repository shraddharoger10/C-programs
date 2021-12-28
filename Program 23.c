#include<stdio.h>

//Question no:5


//Write a program which accept number from user and count frequency of such a digit which are less than 6.
//input: 2395
//output:  3

//input: 922432
//output: 5

//input:9440
//output: 3



int Count(int iNo)
{
	int iCnt=0, iDigit=0;
	
	while(iNo != 0)
	{
		iDigit=iNo%10;
		if(iDigit < 6)
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
	
	iRet=Count(iValue);
	printf("Digit less than 6 are: %d\n",iRet);
	
	return 0;
}