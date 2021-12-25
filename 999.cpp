// write a program to read numbers from keyboard continously till we press 333 and to find the sum of positive numbers//
#include<stdio.h>
main()
{
	int num,sum=0;
	printf("enter the numbers\n");
	scanf("%d",&num);
	while(num!=333)
	{
		if(num>0)
		{
			sum=sum+num;
		}
		printf("enter the numbers from keyboard.press 333 to exit\n");
		scanf("%d",&num);
	}
	if(num==333)
	{
		printf("sum of only positive numbers entered is %d\n",sum);
	}
}
