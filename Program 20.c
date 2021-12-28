#include<stdio.h>

//Question no:2

int ChkZero(int iNo)
{
	int iCnt=0, iDigit=0;
	while(iNo != 0)
	{
		iDigit=iNo%10;
		if(iDigit == 0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
	
}
int main()
{
	int iValue =0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	
	iRet=ChkZero(iValue);
	printf("Number of zero is: %d\n",iRet);
	return 0;
}