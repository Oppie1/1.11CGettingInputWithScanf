#include <stdio.h>
#include <stdlib.h>

int main()
{
	char firstName[20];
	char crush[20];
	int numberOfBabies;

	printf("What is your name? \n");
	scanf_s("%s", firstName);

	printf("Who are you going to marry \n");
	scanf_s("%s", crush);

	printf("How many kids will you have \n");
	scanf_s("%d", &numberOfBabies);

	printf("%s and %s are in love and will have %d babies", firstName, crush, numberOfBabies);

	return 0;
	
}