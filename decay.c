#include <stdio.h>

void show(char *s) {
    printf("inside show: sizeof(s) = %zu\n", sizeof(s));
}

int main(void) {
    char word[] = "kernel";
    printf("in main:     sizeof(word) = %zu\n", sizeof(word));
    show(word);
    return 0;
}
