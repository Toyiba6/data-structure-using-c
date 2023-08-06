#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
}
struct node*headlinked(struct node * head){
    struct node *ptr;
    ptr->next=NULL;

 ptr->next=head;
    while (ptr->next!=head) {
    printf("%d data %daddress\n",ptr->data,ptr->next);
    }
    return  ptr;
}
 int main(){
    struct node * head;
    head=(struct node *)malloc(sizeof(struct node));
    struct node * secound ;
    secound=(struct node *)malloc(sizeof(struct node));
    struct node * third ;
    third=(struct node *)malloc(sizeof(struct node));
    //CRETE A LINKED LIST
    head->data=20;
    head->next=secound;
    secound->data=30;
    secound->next=third;
    third->data=40;
   third->next=NULL;
  headlinked(head);
    return 0;
 }