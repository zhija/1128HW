#include <stdio.h>
#include <stdlib.h>
int cubebyvalue(int n);
int main()
{
	int number = 5;
	printf("The original value of number is %d\n", number);
	printf("The new value of number is %d\n", cubebyvalue(number));
	system("pause");
	return 0;
}
int cubebyvalue(int n)
{
	return n * n * n;
}