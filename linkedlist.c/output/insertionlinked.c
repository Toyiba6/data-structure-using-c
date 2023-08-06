#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedlisttransverse(struct node*ptr){
    while (ptr != NULL) {
    printf("\nElements :%d",ptr->data);
     ptr=ptr->next;
    }
}
  struct node * insertatbeging(struct node * head , int data){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node * insertatindex(struct node * head , int data, int index){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p= head;
    int i=0;
    while (i!=index-1) {
     p= p->next;
     i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
 struct node * insertatend(struct node * head , int data){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p =head;
    while (p->next!=NULL) {
    p=p->next;
     }
    p->next=ptr;
    ptr->next=NULL;
    return head;
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
    printf("\nbefore linked list");
    linkedlisttransverse(head);

    //head=insertatbeging(head,40);
     //head=insertatindex(head,23,1);
      printf("\nafter linked list");
      insertatend(head, 90);
    linkedlisttransverse(head);

    return 0;
}