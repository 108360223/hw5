#include<stdio.h>
#include<stdlib.h>

int cubbyValue(int n);

int main(void)
{
	int num = 5;
	printf("The original value of number is %d", num);
	num = cubbyValue(num);
	printf("\nThe new value of number is %d\n", num);
	system("pause");
	return 0;
}

int cubbyValue(int n)
{
	return n * n * n;
}