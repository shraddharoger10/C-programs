#include<stdio.h>

int PowerR(int X, int Y)
{
	static int iMult = 1;

	if(Y != 0)
	{
		iMult = iMult * X;
		Y--;
		PowerR(X,Y); // Recursive call
	}
	return iMult;
}

int main()
{
	int no1 = 0, no2 = 0, iret = 0;

	printf("Enter base\n");
	scanf("%d",&no1);

	printf("Enter power\n");
	scanf("%d",&no2);

	iret = PowerR(no1,no2);
	printf("Result is : %d\n",iret);

	iret = PowerIW(no1,no2);
	printf("Result is : %d\n",iret);

	iret = PowerIF(no1,no2);
	printf("Result is : %d\n",iret);

	return 0;
}

int PowerIF(int X,  int Y)
{
	int iMult = 1, i = 0;

	for(i = 1; i <= Y; i++)
	{
		iMult = iMult * X;
	}
	return iMult;
}

int PowerIW(int X,  int Y)
{
	int iMult = 1;

	while(Y != 0)
	{
		iMult = iMult * X;
		Y--;
	}
	return iMult;
}


