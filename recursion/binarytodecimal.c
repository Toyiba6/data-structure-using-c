#include<stdio.h>
void binary();
int main(){
    int num;

    printf("Enter a  number:"); 
     scanf("%d",&num);
     binary(num);

}
void binary(int num){
    if(num==0){
        printf("0");
    }
    else if (num==1) {
    printf("1");
    }
    else {
    binary(num/2);
    printf("%d",num%2);
    }
}