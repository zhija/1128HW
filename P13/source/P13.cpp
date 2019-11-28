#include <stdlib.h>
#include <stdio.h>
void CubeByReference(int& nPtr);
int main()
{
	int number = 5;
	printf("The original value is %d\n", number);
    CubeByReference(number);
	printf("The new value is %d\n", number);
	system("pause");
	return 0;
}
void CubeByReference(int& nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}