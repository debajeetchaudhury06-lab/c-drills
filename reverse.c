#include <stdio.h>
#include <string.h>

void reverse(char *s) {
    char *left = s;
    char *right = s + strlen(s) - 1;
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main(void) {
    char word[] = "kernel";
    printf("before: %s\n", word);
    reverse(word);
    printf("after:  %s\n", word);

    printf("\nlength = %zu bytes (plus 1 for the end marker)\n", strlen(word));
    for (int i = 0; i < 7; i++) {
        printf("word[%d] = %3d   address %p\n", i, word[i], (void *)&word[i]);
    }
    return 0;
}
