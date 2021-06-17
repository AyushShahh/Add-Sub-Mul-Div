#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,add,sub,mul;
	float div;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	if(b != 0)
	{
		add=a+b;
		sub=a-b;
		mul=a*b;
		div=a/(float)b;
		
		printf("\n\n Addition = %d\n",add);
		printf("\n Subtraction = %d\n",sub);
		printf("\n Multiplication = %d\n",mul);
		printf("\n Division = %.2f\n",div);	
	}

	else
	{
		add=a+b;
		sub=a-b;
		mul=a*b;
		
		printf("\n Addition = %d\n",add);
		printf("\n Subtraction = %d\n",sub);
		printf("\n Multiplication = %d\n",mul);
		printf("\n Division = NOT DEFINED\n");
	
	}
	
	getch();
	return 0;
}
