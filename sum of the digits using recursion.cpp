#include<stdio.h>
int sumofthedigits(int);	/*function declaration*/
int main()
{
	int num, result;
	printf("enter an integer number ");
	scanf("%d",&num);
	result=Sum of digits(num);	/*function call*/
	printf("sum=%d",result);
	return 0;
}
int sumofdigits(int main)		/*function defination*/
{
	if (num == 0)                /*base condition*/
	return 0;
	else
	return((num%10)+sumofdigits(num/10));  /*rearsive function cell*/
	}


