#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function to print the linked list
void print_list(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->link;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;
    
    // First node
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    // Second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 46;
    current->link = NULL;
    head->link = current;

    // Third node
    current = malloc(sizeof(struct node));
    current->data = 47;
    current->link = NULL;
    head->link->link = current;

    // Print the linked list
    print_list(head);

    return 0;
}
