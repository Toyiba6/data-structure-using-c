#include<stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node* next;
};
void transverse(struct node * ptr){
    while (ptr!=NULL) {
    printf("Element;\n%d",ptr->data);
    ptr=ptr->next;
    }}
    struct node * linkedATindex(struct node * head, int data, int index){
        struct node *p=head;
        struct node *q=head->next;
        while()
    }
int main(){
    struct node* head;
    head=(struct node *)malloc(sizeof(struct node));
     struct node* secound;
    secound=(struct node *)malloc(sizeof(struct node));
     struct node* third;
    third=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->next=secound;
    secound->data=20;
    secound->next=third;
    third->data=30;
    third->next=NULL;
    transverse(head);
}