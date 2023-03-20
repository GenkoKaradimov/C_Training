#include <stdio.h>

int main(){
    float A, B, p, d = 0.0f;

    printf("Enter floating number A: ");
    scanf("%f", &A);
    printf("A = %f\n", A);

    printf("Enter floating number B: ");
    scanf("%f", &B);
    printf("B = %f\n\n", B);

    p = A * B;
    printf("A * B = %f\n", p);
    d = A / B;
    printf("A / B = %f", d);

    return 0;
}
