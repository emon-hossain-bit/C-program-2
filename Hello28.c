#include<stdio.h>

// Function to convert Celsius to Fahrenheit
float converttemp(float celsius);

int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = converttemp(c);
    printf("Temperature in Fahrenheit: %.2f\n", f);/* here .2 means to display exactly
     2 digits after the decimal point.*/
    return 0;
}

float converttemp(float celsius) {
    float f = celsius * (9.0/5.0) + 32;
    return f;
}