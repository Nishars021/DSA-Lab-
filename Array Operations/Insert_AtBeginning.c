#include <stdio.h>
int main(){
    int arr[10] = {10,20,30,40};
    int n = 4;
    int value = 50;
    for (int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=value;
    n++;
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}