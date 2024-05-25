#include <stdio.h>

int main() {
    char buff[128];
    printf("What is your name? ");
    fgets(buff, sizeof(buff), stdin);
    printf("Yo! %s\n", buff);
    return 0;
}