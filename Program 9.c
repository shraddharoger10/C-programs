#include<stdio.h>

//Question no=4

//Accept two numbers from user and display first number in second number of times.
//input: 12  5
//output: 12 12 12 12 12

//input: -2  3
//output:-2 -2 -2

//input:21 -3
//output: 21 21 21

//input:-2 0
//output: 



void Display(int iNo,int frequency)
{
	int iCnt=0;
      if(frequency < 0)
	  {
		  frequency= -frequency;
	  }
      for(iCnt=1; iCnt<=frequency; iCnt++)
	  {
           printf("%d\n",iNo);
      }
}	  

int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter frequency\n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}



