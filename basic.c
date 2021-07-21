#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,add,sub,mul;
	float div;
	
	printf("\n\n First number (a): ");
	scanf("%d",&a);
	printf("\n Second number (b): ");
	scanf("%d",&b);
	
	if(b != 0)
	{
		add=a+b;
		sub=a-b;
		mul=a*b;
		div=a/(float)b;
		
		printf("\n\n Addition = %d\n",add);
		printf("\n Subtraction = %d\n",sub);
		printf("\n Multiplication = %d\n",mul);
		printf("\n Division (a/b) = %.2f\n",div);	
	}

	else
	{
		add=a+b;
		sub=a-b;
		mul=a*b;
		
		printf("\n Addition = %d\n",add);
		printf("\n Subtraction = %d\n",sub);
		printf("\n Multiplication = %d\n",mul);
		printf("\n Division (a/b)= NOT DEFINED\n");
	}
	
	getch();
	return 0;
}