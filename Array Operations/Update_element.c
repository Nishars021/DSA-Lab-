#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4};
    int n = 4;
    arr[1] = 5;
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}