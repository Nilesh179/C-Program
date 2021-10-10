#include<stdio.h>
int sum(int a,int b);

int main()
{	
	int num1=4,num2=5;
	sum(num1,num2); 
	
int sum(int a,int b) 
{
	printf("The sum of the two numbers is : ");
	return a+b;
}
