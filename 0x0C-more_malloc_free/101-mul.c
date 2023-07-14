#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to check if a string contains only digits
int isNumber(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

// Function to multiply two positive numbers
unsigned long long multiplyNumbers(const char *num1, const char *num2)
{
    unsigned long long result = 0;

    for (int i = 0; num1[i] != '\0'; i++) {
        for (int j = 0; num2[j] != '\0'; j++) {
            result *= 10;
            result += (num1[i] - '0') * (num2[j] - '0');
        }
    }

    return result;
}

int main(int argc, char *argv[])
{
    // Check the number of arguments
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    // Check if the arguments contain only digits
    if (!isNumber(argv[1]) || !isNumber(argv[2])) {
        printf("Error\n");
        return 98;
    }

    // Multiply the numbers
    unsigned long long result = multiplyNumbers(argv[1], argv[2]);

    // Print the result
    printf("%llu\n", result);

    return 0;
}

