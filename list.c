#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *push_front(struct node *head, int value) {
    struct node *n = malloc(sizeof(struct node));
    if (n == NULL) {
        return head;
    }
    n->value = value;
    n->next = head;
    return n;
}

void print_list(struct node *head) {
    for (struct node *cur = head; cur != NULL; cur = cur->next) {
        printf("%d -> ", cur->value);
    }
    printf("NULL\n");
}

void free_list(struct node *head) {
    while (head != NULL) {
        struct node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void) {
    struct node *head = NULL;
    head = push_front(head, 3);
    head = push_front(head, 2);
    head = push_front(head, 1);
    print_list(head);
    free_list(head);
    return 0;
}
