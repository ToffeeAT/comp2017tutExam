#include <stdio.h>

int main() {
    char buff[128];
    fgets(buff, sizeof(buff), stdin);
    printf("%s", buff);
    return 0;
}