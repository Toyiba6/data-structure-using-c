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
struct node * deleteatfirst(struct node * head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node * deleteatindex(struct node * head, int index){
    struct node *p= head;
    struct node *q = head->next;
    for(int i=0; i< index-1 ;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q-> next;
    free(q);
}
struct node * deleteaAtend(struct noode * ptr){
    while(ptr!=NULL){
        free(ptr);
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
    printf("linked list Before ");
    linkedlisttransverse(head);
    printf("linked list after");
   // head=deleteatfirst(head);//====>for deleting first node
   //deleteatindex(head, 1);//===>between delete node
     deleteaAtend(head);
    linkedlisttransverse(head);
    return 0;
}