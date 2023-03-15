#include <stdio.h>

int main()
{
    int A, B, x = 0;
    printf("Enter two numbers A and B: (separated with space) \n");
    scanf("%d %d", &A, &B);
    x = A - B;
    printf("A - B = %d, ", x);

    if(x%2 == 0) printf("%d is even\n", x);
    else printf("%d is odd\n", x);

    printf("A + B = %d\n", A + B);
    printf("A * B = %d\n", A * B);
    if(B != 0) printf("A / B = %d\n", A / B);
    if(B != 0) printf("A %% B = %d\n", A % B);

    int num[5];
    printf("Enter 5 numbers (separated with space): \n");
    scanf("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    x = num[0] + num[1] + num[2] + num[3] + num[4];
    printf("Sum of these 5 numbers is: %d", x);

	return 0;
}
