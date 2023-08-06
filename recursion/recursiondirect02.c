#include <stdio.h>
 void func1();
int main(){
    printf("\nI am in main");
    func1();
    printf("\nI  am in back main");
}
void func2(){
    printf(" \nI am in func2");
    func1();
}

void func1(){
    printf(" \nI am in func1");
    func2();
    printf("\nafter cell");
}