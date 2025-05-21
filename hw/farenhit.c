#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert and display the result
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
