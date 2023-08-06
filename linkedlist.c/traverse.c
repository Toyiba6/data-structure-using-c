#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedlisttransverse(struct node*ptr){
    while (ptr != NULL) {
    printf("\nElements :%d",ptr->data);
    printf("\nAddress:%d",ptr->next);
    ptr=ptr->next;
    }
}
int main(){
    struct node* head;
    struct node* secound;
     struct node* third;


   head=(struct node*)malloc(sizeof(struct node));
   secound=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
    // these nodes are linked //=====>singly linked list<====//
    head->data=10;
    head->next=secound;
    secound->data=20;
    secound->next=third;
    third->data=30;
    third->next=NULL;
    linkedlisttransverse(head);
    return 0;
}