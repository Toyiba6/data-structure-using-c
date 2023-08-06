#include <stdio.h>
#define MAX 100
int top = -1;
int stack [MAX];
void push();
void view();
void push();
int main(){ 
    int ch;
    while (1) {
    printf("1 for  push \n2 for pop \n3 for view");
    printf("\nYou are choice");
    scanf("%d",&ch);
    }
    if (ch==1) {
    printf("Enter a elements to insert");
    scanf("%d",& item)
    push(item);

    }
    else if (ch==2){
        item=pop();
        printf("under flow");
        else{
            printf("pop iten=m is %d",item);
        }
    }

    else if (ch==4) {
    view();
}
    else {
    break;
    }
}
void push(int item){
    if (top==MAX) {
    printf("stack is overflow");
    }
    else{
        stack[++top]=item;
    }
    }
void pop(){
    if(top==-1){
printf("index flow");
 stack[top--1];
}
}
void view(){
    if(top==-1){
    printf("stack is empty");
}
}
else {
    for(int i=0; i<=top; i++){
        printf("%d",stack[i]);
    }
}