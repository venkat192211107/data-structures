#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void push(int val)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}
void pop()
{
    struct node *temp;
    if(head == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Poped element = %d\n", head->data);
        temp = head;
        head = head->next;
        free(temp);
    }
}
void printList()
{
    struct node *temp = head;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    push(10);
    push(20);
    push(30);
    printf("Linked List\n");
    printList();
    pop();
    printf("After the pop, the new linked list\n");
    printList();
    pop();
    printf("After the pop, the new linked list\n");
    printList();
    return 0;
}

