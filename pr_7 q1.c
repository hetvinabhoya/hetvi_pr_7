#include<stdio.h>

int sum(int m,int n)
{
	return m+n;
}

int sub(int m,int n)
{
	return m-n;
}

int multiple(int m,int n)
{
	return m*n;
}

int div(int m,int n)
{
	return m/n;
}

int modulo(int m,int n)
{
	return m%n;
}

void main()
{
	int a,b;
	int choice;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	do
	{
	printf("Press 1 for + \n");
	printf("Press 2 for - \n");
	printf("Press 3 for * \n");
	printf("Press 4 for / \n");
	printf("Press 5 for % \n");
	printf("Press 0 for the exit...\n");
	
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		    printf("Addition of a and b is %d\n",sum(a,b));
		    break;	
	
	    case 2:
	        printf("Subtraction of a and b is %d\n",sub(a,b));
	        break;
	        
	    case 3:
		    printf("Multiplication of a and b is %d\n",multiple(a,b));
			break;
			
		case 4:
		    printf("Division of a and b is %d\n",div(a,b));	
			break;
			
		case 5:
		    printf("Modulo of a and b is %d\n",modulo(a,b));
			break;
		
	choice++;		
	}
	
    }while(choice>0);

}
