#include<stdio.h>
int main (){
    int a[10]={5,4,4,5,6,5,4,6,6,6};
    int n;
    printf("before deletion :");
    printf("enter size of array\n");
    scanf("%d",&n);
     for(int i=0;i<n;i++){

        printf("%d",a[i]);
     }
     printf("after deletion n array :");
      for(int i=0;i<n-1;i++){
        printf("%d",a[i]);
     }
}