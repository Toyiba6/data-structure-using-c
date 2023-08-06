#include<stdio.h>
void toh(int n, char beg, char aux,char end);
int main(){
    char a,b,c;
    int n;
  printf("Enter a value of N :");
  scanf("%d",&n);
  toh(n,'a','b','c');
}
void toh(int n, char beg, char aux , char end){
    if (n<=0) {
    prinf( "illegal entry");

    }
    else if (n==1) {
    printf("%c %c",beg,end);

    }
    else  {

    toh(n-1, char beg, char end , char aux);
    toh(1, char beg, char aux, char end);
    toh(n-1, char aux, char beg, char end);
    }
}