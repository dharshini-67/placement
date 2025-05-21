#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number, reversedValue;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

   
    reversedValue = reverseNumber(number);
    printf("Reversed number: %d\n", reversedValue);

    return 0;
}
