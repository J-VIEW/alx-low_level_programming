#include <stdio.h>

/**
 * is_palindrome - Check if a number is a palindrome.
 * @number: The number to check.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(int number) {
    int original = number;
    int reverse = 0;

    while (number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    return original == reverse;
}

/**
 * find_largest_palindrome - Find the largest palindrome
 * from the product of two 3-digit numbers.
 *
 * Return: The largest palindrome.
 */
int find_largest_palindrome() {
    int largest_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    return largest_palindrome;
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main() {
    int result = find_largest_palindrome();
    printf(" %d\n", result);

    return 0;
}
