#include<stdio.h>
int main(){
    int arr[10]={10,20,30};
    int n=3;
    int value = 40;
    arr[n]=value;
    n++;
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}