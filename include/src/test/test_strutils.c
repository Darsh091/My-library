#include <stdio.h>
#include <string.h>
#include "strutils.h"

int main() {
    char test1[] = "hello";
    str_reverse(test1);
    printf("Reversed: %s\n", test1);  // olleh

    char test2[] = "OpenAI";
    str_to_upper(test2);
    printf("Uppercase: %s\n", test2);  // OPENAI

    char test3[] = "OpenAI";
    str_to_lower(test3);
    printf("Lowercase: %s\n", test3);  // openai

    printf("Is 'madam' a palindrome? %s\n", str_is_palindrome("madam") ? "Yes" : "No");  // Yes
    printf("Is 'robot' a palindrome? %s\n", str_is_palindrome("robot") ? "Yes" : "No");  // No

    return 0;
}
