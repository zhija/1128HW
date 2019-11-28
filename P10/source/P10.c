#include <stdio.h>
#include <stdlib.h>
void CubeByAddress(int* nPtr);
int main()
{
	int number = 5;
	printf("The origianl value is %d\n", number);
	CubeByAddress(&number);
	printf("The new value is %d\n", number);
	system("pause");
	return 0;
}
void  CubeByAddress(int* nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}