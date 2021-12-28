#include<stdio.h>

//Question no=2

//Write a program which accept number from user and print factors of that number

//input: 24
//output: 1  2  3  4   6  8   12


void DisplayFactor(int iNo)
{    
     int i=0;
	 
     if(iNo <= 0)
	 {
		 iNo = -iNo;
	 }
	 for(i=1; i<=iNo/2; i++)
	 {
		 if(iNo%i==0)
		 {
			 printf("%d\t",i);
		 }
	 }
}
int main()
{
    int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;	
}