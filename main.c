#include <stdio.h>
int popularity;
int size;
int homeValue;

int main(void)
{
	printf("Enter the popularity of your house as an integer\n");
	scanf("%d", &popularity);
	printf("Enter the size of your house as an integer\n");
	scanf("%d", &size);
	homeValue = 10000*(pow(popularity,3)+pow(size,2));
	printf("\nYour household value is: %d TL\n", homeValue);
	system("pause");
}
