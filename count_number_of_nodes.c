#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
void counnt_nodes(struct node *head) {
    int count=0;
    if(head==NULL){
        printf("linked list is empty");
    }
    else{
    while (head != NULL) {
        count++;
        head = head->link;
    }
    printf("count is %d\n",count);
    }
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
    counnt_nodes(head);

    return 0;
}
