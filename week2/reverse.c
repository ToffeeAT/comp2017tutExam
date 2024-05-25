#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char str[]){
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    if (str[end] == '\n') {
        end--;
    }

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main(void) {
    char buffer[128];
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        reverse(buffer);
        printf("%s\n", buffer);
    }
}