//this program reads 2 numbers from the user and then compares them
//prints the greatest number of both as output

#include<stdio.h>
int main()
{int a,b;
printf("please enter any two numbers");
scanf("%d%d",&b,&a);
if (a>b)
	printf("a is greater than b");
else 
	printf("a is less than b");
}
