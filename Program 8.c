#include<stdio.h>

//Question no=3
//Accept no. from user if no. is less than 10 then print "Hello" otherwise print "Demo"


void Display(int iNo)
{
   if(iNo<10)
   {
       printf("Hello");
   }
    else
	{
        printf("Demo");
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
