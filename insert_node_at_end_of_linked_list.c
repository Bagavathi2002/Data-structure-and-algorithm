#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void add_node(struct node *head,int num){
    struct node *temp= malloc(sizeof(struct node));
    temp->data=num;
    temp->link=NULL;
    while (head->link != NULL) {
        printf("%d -> ", head->data);
        head = head->link;
    }
    head->link=temp;
}
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
    int n;
    printf("Enter the number to insert at end : ");
    scanf("%d",&n);
    add_node(head,n);
    int m;
    printf("Enter the number to insert at end : ");
    scanf("%d",&m);
    add_node(head,m);

    
    print_list(head);

    return 0;
}
