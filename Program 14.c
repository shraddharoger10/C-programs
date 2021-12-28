
//Question no:1

//Write a program which accept number from user and display its multiplication of factors.
//input: 12
//output: 144 (1*2*3*4*6)

//input: 10
//output: 10  (1*2*5)


#include<stdio.h>

int MultiFact(int);

int main()
{   
    int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet= MultiFact(iValue);

    printf("%d",iRet);
	
	return 0;
}

int MultiFact(int iNo)
{
	int iCnt=0, iFact=1;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	for(iCnt=1; iCnt<iNo; iCnt++)
	{   
       if((iNo % iCnt)==0)
		{
            iFact=iFact*iCnt; 
			
        }
		    	
	}
    return iFact;
}