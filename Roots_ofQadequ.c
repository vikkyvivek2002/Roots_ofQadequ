#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,den;
	float  root1, root2;
	printf("Enter the values of a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	d = (b*b - 4*a*c);
	den = 2*a;
	if(d>0)
	{
		printf("REAL ROOTS");
		root1= (-b+sqrt(d))/den;
	    root2= (-b-sqrt(d))/den;
		printf("%f\n",root1);
		printf("%f\n",root2);
	}
	else if(d=0)
	{
	 	printf("EQUAL ROOTS");
		root1= (-b)/den;
	    root2= (-b)/den;
		printf("%f\n",root1);
		printf("%f\n",root2);	
	}
	else if(d<0)
	{
		printf("IMAGINARY ROOTS");
	}
	 return 0;
}