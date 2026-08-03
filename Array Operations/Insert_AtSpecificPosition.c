#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4};
    int n=4;
    int pos=2;
    int value =35;
    for (int i=n;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
