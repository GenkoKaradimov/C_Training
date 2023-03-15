#include <stdio.h>

int main()
{
    // char array
    char name[30];
	printf("Enter your name: ");
	scanf("%s", name);

	// integer
	int years;
	printf("How old are you: ");
	scanf("%d", &years);

	printf("\n%s is %d years old.\n", name, years);


	return 0;
}
