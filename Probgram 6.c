#include<stdio.h>

//Accept 1 no. from user and print that no. of * on screen
//input: 5
//output: * * * * *

//Question no=1


void Display(int iNo)
{
     int iCnt=0;
	 
	 if(iNo <0)
	 {
		 iNo = -iNo;
	 }
	 
	 while(iCnt<iNo)
	 {
	   printf(" * ");
	   iCnt++;
	 }
}
int main()
{
    int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
