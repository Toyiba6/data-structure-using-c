#include <stdio.h>
//int arr[6]={2,3,5,6,8,8};
int findfrequency(int arr[6],int size,int target){

int count=0;
for (int i=0; i<=size; i++){
    if (arr[i]==target) {
    count++;
    printf("%d",count);
    }
}

}

int main(){

int arr[6]={2,3,5,6,8,8};
findfrequency(arr, 6,8);
return 0;
}