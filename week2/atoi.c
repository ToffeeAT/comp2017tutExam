#include <stdio.h>
#include <ctype.h>

int atoi(const char s[]) {
    int i = 0;
    int n = 0;
    int sign = 1;

    // Skip leading whitespaces
    while (isspace(s[i])) {
        i++;
    }

    // Handle optional sign
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Convert characters to integer
    while (isdigit(s[i])) {
        n = n * 10 + (s[i] - '0');
        i++;
    }

    return sign * n;
}

int main(void) {
    printf("%d\n", atoi(""));       // Undefined behavior, but typically 0
    printf("%d\n", atoi("0"));      // 0
    printf("%d\n", atoi("0123"));   // 123
    printf("%d\n", atoi("1234"));   // 1234
    printf("%d\n", atoi("-1234"));  // -1234
    return 0;
}
