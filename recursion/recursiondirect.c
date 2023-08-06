#include <stdio.h>
 void func1();
int main(){
    printf("\nI am in main");
    func1();
    printf("\nI  am in back main");
}
void func1(){
    printf(" \nI am in func1");
    func1();
    printf("\nafter cell");
}