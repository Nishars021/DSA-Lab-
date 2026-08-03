#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4};
    int n=4;
    int key = 3;
    int found = 0;
    for (int i=0;i<n;i++){
        if (arr [i]==key){
            printf("Element is at %d",i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Not found");
    }
    return 0;
}