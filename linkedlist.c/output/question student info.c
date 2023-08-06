#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char name[7];
    char grade;
    int age;
    struct node * next;

};
void transverselinkedlist(struct node * head ){
    struct node *ptr= head;
while (ptr!=NULL) {
if (ptr->grade == 'A') {
printf("name: %s age: %d grade:\n",ptr->name,ptr->age,ptr->grade);
}
ptr=ptr->next;
}
}
int main(){
    struct node* head;
    struct node* secound;
    struct node* third;
    struct node* forth;
    struct node* fifth;
    head=(struct node *)malloc(sizeof(struct node));
     secound=(struct node *)malloc(sizeof(struct node));
      third=(struct node *)malloc(sizeof(struct node));
       forth=(struct node *)malloc(sizeof(struct node));
        fifth=(struct node *)malloc(sizeof(struct node));

        strcpy(head->name,"afsana");
        head->age=17;
        head->grade='A';
        head->next=secound;
//=======>create linked list with has data and also linked with other nodes<===//
        strcpy(secound->name,"sahil");
        secound->age=17;
        secound->grade='A';
        secound->next=third;
         strcpy(third->name,"zahid");
        third->age=17;
        third->grade='B';
        third->next=forth;
    strcpy(head->name,"Azmat");
        forth->age=17;
        forth->grade='A';
        forth->next=fifth;
         strcpy(fifth->name,"zakir");
        fifth->age=17;
        fifth->grade='C';
        fifth->next=NULL;
        transverselinkedlist(head);
        //====>after created node deletetion<====//
        free(head);
        free(secound);
        free(third);
        free(forth);
        free(fifth);
    return  0;
}