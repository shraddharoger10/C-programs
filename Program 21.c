#include<stdio.h>

//Question no:3

//Write a program which accept number from user and count frequency of 2 in it.
//input: 2395
//output:  1

//input: 922432
//output: 3

//input:1018
//output: 0



int CountTwo(int iNo)
{
	int iCnt=0, iDigit=0;
	
	while(iNo != 0)
	{
		iDigit=iNo%10;
		if(iDigit == 2)
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
	
	iRet=CountTwo(iValue);
	printf("Number of two is: %d\n",iRet);
	
	return 0;
}