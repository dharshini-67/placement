#include <stdio.h>

// Function to reverse the number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = reverseNumber(num);
    return (num == reversed);
}

int main() {
    int number;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check and display result
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
