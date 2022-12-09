#include <stdio.h>

/**
 * main-Entry point
 * Description:prints out the byte size of the c data types
 * Return:Always 0(Success)
 */

int main(void)
	{
	printf("The size of a char data type is %d byte(s)\n", (int)sizeof(char));
	printf("The size of an int data type is %d byte(s)\n", (int)sizeof(int));
	printf("The size of a long int data type is %d bytes(s)\n", (int)sizeof(long int));
	printf("The size of a long long int data type is %d byte(s)\n", (int)sizeof(long long int));
	printf("The size of a float data type is %d byte(s)\n", (int)sizeof(float));
	return (0);
	}
