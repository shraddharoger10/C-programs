#include<stdio.h>

//Question no=1

//write a program which accept one number from user and print that number of even numbers on screen.

//input: 7
//output: 2 4 6 8 10 12 14 

void PrintEven(int iNo)
{
     int iCnt=1;
	 
	 if(iNo <= 0)
	 {
		 return;
	 }
	 
	 while(iCnt<=iNo*2)
	 {
	   iCnt++;
	   if(iCnt%2==0)
	   {
		   printf("%d\t",iCnt);
	   }
	   
	 }
	
}
int main()
{
    int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	return 0;
}
