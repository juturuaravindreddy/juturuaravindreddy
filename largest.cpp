#include<stdio.h>

 main()
{
	int a,b,c,d,e;
printf("enter 5 numbers\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 if((a>b)&&(a>c)&&(a>d)&&(a>e))
{
	printf("a is big");
}
else if((b>a)&&(b>c)&&(b>d)&&(b>e))
{    
	printf("b is big");
	}
	else if((c>a)&&(c>b)&&(c>d)&&(c>e))
	{
		printf("c is big");
	}
	else if ((d>a)&&(d>b)&&(d>c)&&(b>e))
	{
		printf("d is big");
	}
	else
	{
	
	printf("e is big");
    }
}



