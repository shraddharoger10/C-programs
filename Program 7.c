#include<stdio.h>


//Accept 1 no. from user and print that no. of * on screen
//Question no=2

void Display(int iNo)
{
     if(iNo < 0)
	 {
		 iNo = -iNo;
	 }
	 while(iNo>0)
	 {
	   printf(" * ");
	   iNo--;
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