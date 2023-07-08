#include <stdio.h>

char* _strstr(char* haystack, char* needle) {
    if (*needle == '\0') {
        return haystack;
    }

    while (*haystack != '\0') {
        char* start = haystack;
        char* pattern = needle;

        while (*haystack != '\0' && *pattern != '\0' && *haystack == *pattern) {
            haystack++;
            pattern++;
        }

        if (*pattern == '\0') {
            return start;
        }

        haystack = start + 1;
    }

    return NULL;
}
