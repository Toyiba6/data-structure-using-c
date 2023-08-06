#include<stdio.h>
struct node{
    int data;
    struct node*next;
};
int main(){
struct node n1,n2,n3;
n1.data=10;
n2.data=20;
n3.data=30;

n1.next=&n2;
n2.next=&n3;
n3.next=null;
printf("\n%d",n1.data);
printf("\n%d",n2.data);
printf("\n%d",n3.data);
printf("\n%d",n1.next);
printf("\n%d",n1.next->data);
printf("\n%d",n1.next->next);
return 0;
}