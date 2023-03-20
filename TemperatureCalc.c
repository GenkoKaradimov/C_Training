#include <stdio.h>

float fahrenheit_to_celsius(float f){
   return (f - 32.0) * 5.0 / 9.0;
}

float celsius_to_fahrenheit(float f){
    return (9.0 * f / 5.0 + 32);
}

int main()
{
  float temp = 0.0f;

  printf("Enter temperature: ");
  scanf("%f", &temp);

  printf("%f Fahrenheit in Degree Celsius : %f\n",temp , fahrenheit_to_celsius(temp));
  printf("%f Celsius in Degree Fahrenheit : %f\n",temp , celsius_to_fahrenheit(temp));

  return 0;
}
