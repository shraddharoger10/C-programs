#include<stdio.h>

//Question no:5

//Write a program which accept number from user and return difference between summation of all its factors and non factors.
//input:12
//output:-34

//input:10
//output:-29

int FactDiff(int iNo)
{
	int iCnt=0, iSum=0;
	int iAdd=0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if((iNo % iCnt)==0)
		{
            iAdd=iAdd+iCnt; 
			
        }
		    	
		if(iNo % iCnt !=0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iAdd-iSum;
}

int main()
{
	int iValue=0, iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}


