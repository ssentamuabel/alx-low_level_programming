#include <stdio.h>

int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    // Skip leading whitespace
    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;

    // Handle optional sign
    if (*s == '-' || *s == '+') {
        if (*s == '-')
            sign = -1;
        s++;
    }

    // Process digits
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
