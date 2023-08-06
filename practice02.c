#include<stdio.h>
int main(){
    int ch;
    printf("1 for push \n2 for pop and \\n3 for veiw !:");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter element on push:");
        scanf("%d",&item);
        push(item);
    }
    else if (ch==2) {
    item=pop();
    if (item==-1) {
        printf("overflow")

    }
    else  {
        printf("item is poped%d",item);

    }

    }
}