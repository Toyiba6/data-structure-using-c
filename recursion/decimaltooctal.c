#include<stdio.h>
void decimaltooctal();
int main(){
int num;
printf("Enter a numbers You'r Choice ! :");
scanf("%d",&num);
decimaltooctal(num);
}
void decimaltooctal(int num){
if (num>=0) {
printf("%d",num%8);
}
}